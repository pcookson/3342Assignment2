c: c.c
	gcc -o PrimesC c.c

cpp: cpp.cpp
	g++ cpp.cpp -o PrimesCpp

clean:
	rm -f PrimesC PrimesCpp
