#include <stdio.h>
#include <stdlib.h>


struct primesList
{
    int prime;
    struct primesList *next;
};

// The head and current of the linked list. Move current around to traverse the list
struct primesList *head = NULL;
struct primesList *current = NULL;

//Creates a linked list.
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

/*
* Adds a number to a linked list
*/
struct primesList *addToList(int prime)
{
    //if no list created, create it and return created list
    if(head == NULL)
    {
        return createList(prime);
    }

    struct primesList *list = (struct primesList*)malloc(sizeof(struct primesList));

    list->prime = prime;
    list->next = NULL;

    current->next = list;
    current = list;

    return list;
}

/*
* Checks to see if a number is prime
*/
int isPrimeNumber(int n)
{
    int isPrime = 1;
    int i;
    if(n !=1)
    {
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    else
    {
        isPrime = 0;
    }

    return isPrime;
}

/*
* Prints prime numbers in linked list to the screen
*/
void printPrimes()
{
    struct primesList *list = head;
    printf("\nPrimes are: \n");
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
        if(isPrime == 1)
        {
            addToList(n);
        }
    }

    free(head);
    free(current);
    return 0;

}
