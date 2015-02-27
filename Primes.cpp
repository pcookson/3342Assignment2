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

