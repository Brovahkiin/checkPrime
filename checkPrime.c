#include <stdio.h>
#include <math.h>                       //gcc -lm for math lib

typedef unsigned long uLong;
uLong lowDiv = 0;

uLong isPrime(double a)
{
        uLong i = 2;
        while(i*i <= a)
        {
                if(fmod(a, i) == 0)
                {
                        lowDiv = i;
                        return 0;
                }
                i++;
        }
        return 1;
}
int main(void)
{
        uLong input;
        printf("Which number would you like to check prime? ");
        scanf("%lu", &input);
        if(isPrime(input)==0)
                printf("%lu is not a prime.\nLowest divisible number: %lu\n", input, lowDiv);
        else
                printf("%lu is a prime!\n", input);

        return 0;
}
