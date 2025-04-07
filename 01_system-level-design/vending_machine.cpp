#include <iostream>

#define i_nickle    5
#define i_dime      10
#define i_quartus   25

int main(){
    std::cout << "Thuc hien test Vending Machine" << std::endl;

    
    int i_prince;
    int t_price = 0;
    int o_soda = 0;
    int o_change = 0;
   while(1){ 
    std::cout << "Nhap so tien bo vao (i_nickle = 5, i_dime = 10, i_quartus = 25): ";
    std::cin >> i_prince;

    switch (i_prince) {
        case i_nickle:
            t_price += i_nickle;
        break;

        case i_dime:
            t_price += i_dime;
        break;

        case i_quartus:
            t_price += i_quartus;
        break;

        default: 
            t_price += 0;
        break;
    }
    
        std::cout << "Gia tri price hien tai: " << t_price << std::endl;

        if((t_price - 20) >= 0){
            o_soda = 1;
            o_change = t_price - 20;
            std::cout << "Gia tri dau ra (o_soda): " << o_soda << std::endl;
            std::cout << "Gia tri tien thoi (o_change): " << o_change << std::endl;
            break;
        } else {
            o_soda = 0;
            o_change = 0;
            std::cout << "Gia tri dau ra (o_soda): " << o_soda << std::endl;
            std::cout << "Gia tri tien thoi (o_change): " << o_change << std::endl;
        }
    }

    return 0;
}
