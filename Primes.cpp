#include "Primes.h"

Primes::Primes()
{
    //ctor
}

bool Primes::isPrimeNumber(int n)
{
    bool isPrime = true;
    int i;
    if(n !=1)
    {
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    else
    {
        isPrime = false;
    }

    return isPrime;
}

void Primes::printPrimes(std::vector<int> &primeVector)
{
    std::cout << "\nPrimes are: " << std::endl;
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
