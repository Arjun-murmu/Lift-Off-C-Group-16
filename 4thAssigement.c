#include<stdio.h>


int main()
{
    float a,b,c;
    int ch;
    printf("Enter first number : ");                 //user input first number
    scanf("%f",&a);
    printf("Enter second Number : ");                 //user input second number
    scanf("%f",&b);
    printf("Enter a choice : ");
    scanf("%d",&ch);

    //check condition switch case

    switch (ch)
    {
       case 1: c=a+b;                    /* constant-expression */
           printf("Sum Number : %f\n ", c);            /* code */
        break;
        case 2: 
           c=a-b;
           printf("Sub Number : %f\n", c);
        break;
        case 3:
            c=a*b;
            printf("Multipication Number : %f\n ", c);
        break;
        case 4:
            c=a/b;
            printf("Remider Number : %f\n ", c);
        break;
         
    default:
          printf("Invalid number \n");
        break;
    }

    //check positive number and negetive number

    if(c>0)
    {                                           
        printf("Positive Number.\n");
    }
    else if(c<0)
    {
        printf("Negative  Number.\n");
    }
    else
    {
        printf("No Exist\n");
    }
    
    
    return 0;
}