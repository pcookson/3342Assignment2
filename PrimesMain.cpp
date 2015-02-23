#include "Primes.h"

int main()
{
    bool isPrime;
    int n;
    std::vector<int> primeVector;
    Primes primes;

    while(true)
    {
        printf("Enter an integer: ");
        scanf("%d", &n);
        if (n == 0)
        {
            primes.printPrimes(primeVector);
            break;
        }

        isPrime = primes.isPrimeNumber(n);
        if(isPrime){
            primeVector.push_back(n);
        }
    }

}
