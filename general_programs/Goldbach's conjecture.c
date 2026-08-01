// Goldbach's conjecture
// Every even integer greater than 2 can be represented as the sum of two primes.

#include <stdio.h>
#include <math.h>
#include <time.h>

int prime_num_rep(int i);
int prime_check(int n);

#define SPACE 1000000
int main()
{
    // timer
    clock_t start_time = clock();

    int if_found = 0;
    // loop for natural even number
    for (int i = 4; i<=SPACE; i+=2)
    {

        if( prime_num_rep(i)==0)
        {
            printf("%d this is the number that does not satisfies Goldbach's conjecture",i);
            if_found=1;
            break;
        }

    }
    if (if_found == 0)
        printf("No such number was found\n");
    clock_t end_time = clock();
    double exe_time = ((double)(end_time-start_time))/CLOCKS_PER_SEC;
    printf("Execution time: %f",exe_time);


    return 0;
}
int prime_num_rep(int i)
{
    for (int j = 2; j<=i/2; j++)
        {
            if (prime_check(j)==1)
                {
                    int k = i-j;
                    if (prime_check(k)==1)
                    {
                        return 1;
                    }
                }
        }   
    return 0;      
}
int prime_check(int n)
{
    if (n<2)
        return 0;
    else
    {
        for (int i = 2,j = sqrt(n); i<=j; i++)
        {
            if (n%i == 0)
                return 0;
        }
        return 1;
    }
}