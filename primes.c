#include <stdio.h>
#include <stdlib.h>


struct primesList
{
    int prime;
    struct primesList *next;
};

struct primesList *head = NULL;
struct primesList *current = NULL;

struct primesList *createList(int prime)
{
    // initalize linked list
    struct primesList *list = (struct primesList*)malloc(sizeof(struct primesList));

    list->prime = prime;
    list->next = NULL;

    current = list;
    head = current;
    return list;
}

struct primesList *addToList(int prime)
{
    //if no list created, create it and return created list
    if(head == NULL){
        return createList(prime);
    }

    struct primesList *list = (struct primesList*)malloc(sizeof(struct primesList));

    list->prime = prime;
    list->next = NULL;

    current->next = list;
    current = list;

    return list;
}


int isPrimeNumber(int n)
{
    int isPrime = 1;
    int i;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0){
            isPrime = 0;
            break;
        }
    }

    return isPrime;
}

void printPrimes()
{
    struct primesList *list = head;
    while(list !=NULL)
    {
        printf("%d\n", list->prime);
        list = list->next;
    }

    return;
}

int main()
{
    int isPrime;
    int n;
    while(1)
    {
        printf("Enter an integer: ");
        scanf("%d", &n);
        if (n == 0)
        {
            printPrimes();
            break;
        }

        isPrime = isPrimeNumber(n);
        if(isPrime == 1){
            addToList(n);
        }
    }

    return 0;

}
