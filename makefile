all:	primes.c
	gcc -o primes primes.c

clean:
	rm -f primes
