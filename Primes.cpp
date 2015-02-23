#include "Primes.h"

Primes::Primes()
{
    //ctor
}

bool Primes::isPrimeNumber(int n)
{
    bool isPrime = true;
    int i;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

void Primes::printPrimes(std::vector<int> &primeVector)
{
    for(std::vector<int>::iterator it = primeVector.begin(); it != primeVector.end(); ++it)
    {
        std::cout << *it << "\n";
    }
    return;
}

Primes::~Primes()
{
    //dtor
}
