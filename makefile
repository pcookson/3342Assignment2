primesc: primes.c
	gcc -o PrimesC primes.c

primescpp: Primes.cpp
	g++ Primes.cpp -o PrimesCpp

clean:
	rm -f PrimesC PrimesCpp
