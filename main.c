#include<stdio.h>
int main()
{
    int Quotient,dividend,divisor,remainder;
    printf("Enter dividend and divisor");
    scanf("%d%d",&dividend,&divisor);
    Quotient=dividend/divisor;
    printf("Quotient = %d",Quotient);
    remainder=dividend-(Quotient*divisor);
    printf("Remainder = %d",remainder);
    return 0;

}
