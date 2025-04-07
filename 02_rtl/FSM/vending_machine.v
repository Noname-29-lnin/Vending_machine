module vending_machine(
    input wire      i_clk,
    input wire      i_rst_n,
    input wire      i_nickle,
    input wire      i_dime,
    input wire      i_quarter,
    output wire     o_soda,
    output wire [2:0] o_change
);

reg [3:0] state, nstate;

next_state_logic NSL(
    .i_nickle       (i_nickle),
    .i_dime         (i_dime),
    .i_quarter      (i_quarter),
    .i_pstate       (state),

    .o_nstate       (nstate)
);

State_logic SL(
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_nstate       (nstate),
    .o_pstate       (state)
);

Output_logic OL(
    .i_pstate       (state),
    .o_soda         (o_soda),
    .o_change       (o_change)
);

endmodule

module next_state_logic(
    input wire          i_nickle,
    input wire          i_dime,
    input wire          i_quarter,
    input reg [3:0]    i_pstate,

    output reg [3:0]   o_nstate
);

parameter reg [3:0] IDLE        = 4'b0000;
parameter reg [3:0] FIVE        = 4'b0001;
parameter reg [3:0] TEN         = 4'b0010;
parameter reg [3:0] FIFTEEN     = 4'b0011;
parameter reg [3:0] TWENTY      = 4'b0100;
parameter reg [3:0] TWENTY_FIVE = 4'b0101;
parameter reg [3:0] THIRTY      = 4'b0110;
parameter reg [3:0] THIRTY_FIVE = 4'b0111;
parameter reg [3:0] FOURTY      = 4'b1000;
parameter reg [3:0] FOURTY_FIVE = 4'b1001;

always_comb begin
    case(i_pstate)
        IDLE: begin
            if(i_nickle) o_nstate = FIVE;
            else if(i_dime) o_nstate = TEN;
            else if(i_quarter) o_nstate = TWENTY_FIVE;
            else o_nstate = IDLE;
        end 
        FIVE: begin
            if(i_nickle) o_nstate = TEN;
            else if(i_dime) o_nstate = FIFTEEN;
            else if(i_quarter) o_nstate = THIRTY;
            else o_nstate = FIVE;
        end 
        TEN: begin
            if(i_nickle) o_nstate = FIFTEEN;
            else if(i_dime) o_nstate = TWENTY;
            else if(i_quarter) o_nstate = THIRTY_FIVE;
            else o_nstate = TEN;
        end
        FIFTEEN: begin
            if(i_nickle) o_nstate = TWENTY;
            else if(i_dime) o_nstate = TWENTY_FIVE;
            else if(i_quarter) o_nstate = FOURTY;
            else o_nstate = FIFTEEN;
        end
        TWENTY: begin
            if(i_nickle) o_nstate = TWENTY_FIVE;
            else if(i_dime) o_nstate = THIRTY;
            else if(i_quarter) o_nstate = FOURTY_FIVE;
            else o_nstate = TWENTY;
        end
        TWENTY_FIVE, THIRTY, THIRTY_FIVE, FOURTY, FOURTY_FIVE: begin
            if(i_nickle) o_nstate = FIVE;
            else if(i_dime) o_nstate = TEN;
            else if(i_quarter) o_nstate = TWENTY_FIVE;
            else o_nstate = TWENTY_FIVE;
        end
        default: begin
            o_nstate = IDLE;
        end 
    endcase
end 

endmodule

module State_logic(
    input wire      i_clk,
    input wire      i_rst_n,
    input reg [3:0] i_nstate,
    output reg [3:0] o_pstate
);

always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_next_state
    if(!i_rst_n) o_pstate <= 4'b0000;
    else         o_pstate <= i_nstate;
end 

endmodule

module Output_logic(
    input reg [3:0] i_pstate,
    output wire      o_soda,
    output wire [2:0] o_change
);

parameter reg [3:0] IDLE        = 4'b0000;
parameter reg [3:0] FIVE        = 4'b0001;
parameter reg [3:0] TEN         = 4'b0010;
parameter reg [3:0] FIFTEEN     = 4'b0011;
parameter reg [3:0] TWENTY      = 4'b0100;
parameter reg [3:0] TWENTY_FIVE = 4'b0101;
parameter reg [3:0] THIRTY      = 4'b0110;
parameter reg [3:0] THIRTY_FIVE = 4'b0111;
parameter reg [3:0] FOURTY      = 4'b1000;
parameter reg [3:0] FOURTY_FIVE = 4'b1001;

always_comb begin : proc_output_Moore
    case(i_pstate)
        IDLE: begin
            o_soda = 1'b0;
            o_change = 3'b000;
        end 
        FIVE, TEN, FIFTEEN: begin
            o_soda = 1'b0;
            o_change = 3'b000;
        end
        TWENTY: begin
            o_soda = 1'b1;
            o_change = 3'b0000;
        end 
        TWENTY_FIVE, FOURTY_FIVE: begin
            o_soda = 1'b1;
            o_change = 3'b001;
        end
        THIRTY: begin
            o_soda = 1'b1;
            o_change = 3'b010;
        end 
        THIRTY_FIVE: begin
            o_soda = 1'b1;
            o_change = 3'b011;
        end 
        FOURTY: begin
            o_soda = 1'b1;
            o_change = 3'b100;
        end 
        default: begin
            o_soda = 1'b0;
            o_change = 3'b000;
        end 
    endcase
end

endmodule
