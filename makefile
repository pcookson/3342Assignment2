primesc: primes.c
	gcc -o PrimesC primes.c

primescpp: PrimesMain.cpp Primes.cpp
	g++ PrimesMain.cpp Primes.cpp -o PrimesCpp

clean:
	rm -f PrimesC PrimesCpp
