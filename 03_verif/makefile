MODULE = vending_machine

all: clean complie run

complie:
	@echo '-> Complie'
	@verilator -Wall -Wno-lint -Wno-unoptflat -Wno-width --trace --cc --exe --timing --trace --build -j 0 -f flist.f 

run:
	@echo '-> Run'
	@./obj_dir/V$(MODULE)

clean:
	@echo '-> Clean'
	@rm -rf obj_dir/ *.vcd
