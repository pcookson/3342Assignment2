#ifndef PRIMES_H
#define PRIMES_H
#include <iostream>
#include <vector>
#include <stdio.h>

class Primes
{
    public:
        Primes();
        virtual ~Primes();

        bool isPrimeNumber(int n);
        void printPrimes(std::vector<int> &primeVector);

    protected:
    private:
};

#endif // PRIMES_H
