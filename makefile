all:
	g++ -std=c++14 -o test.bin main.cpp QuickSort.h

debug:
	g++ -std=c++14 -g -o test.elf main.cpp QuickSort.h

clean:
	rm test.bin
	rm test.elf