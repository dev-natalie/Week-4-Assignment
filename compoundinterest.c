//program to find compound interest
#include <stdio.h>
#include <math.h>
int main () {
    //decleration and initialization
    int n,rate,time;
    float principle,compoundinterest,amount;

    printf("enter the principle:");
    scanf("%f",&principle);

    printf("enter the number of time periods elapsed:");
    scanf("%d",&time);

    printf("enter the rate:");
    scanf("%d",&rate);

    printf("enter the number of times interest applied per time period:");
    scanf("%d",&n);

    amount=principle*pow((1+rate/n),n*time);
    printf("the total amount is %.2f\n",amount);

    compoundinterest=amount - principle;
    printf("the compoundinterest is:%.2f\n",compoundinterest);

    return 0;
}   















