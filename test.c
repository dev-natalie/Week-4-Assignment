//program to calculate simple interest
#include <stdio.h>
int main() {
    int principle,rate,time,simpleinterest;

    printf("enter the principle:");
    scanf("%d",&principle);

    printf("enter the rate per annum:");
    scanf("%d",&rate);

    printf("enter the time per year:");
    scanf("%d",&time);

    simpleinterest=(principle * rate * time)/100;
    printf("the simple interest is %d",simpleinterest);

    return 0;
}

    