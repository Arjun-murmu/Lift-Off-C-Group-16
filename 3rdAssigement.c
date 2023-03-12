#include<stdio.h>

int main()
{
    int n,lastdigit,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    do
    {
        lastdigit = n % 10;                         
        sum += lastdigit;
        n = n / 10;
    } while (n!=0);

    printf("%d\n", sum);
    return 0;
}