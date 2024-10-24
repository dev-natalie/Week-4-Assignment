#include <stdio.h>
int main() {
    int age;
    float income;

    printf("enter your age:");
    scanf("%d",&age);
    

    if (age >=21) {
        printf("congratulations you qualify for a loan.\n");
    } else {
        printf("unfortunately,we are unable to offer you a loan");
        return 0;
    }

    printf("enter you annual income:");
    scanf("%f",&income);

    if(income >=21000){
        printf("congratulations you are qualified to get a loan!");

    }else {
        printf("unfortunately,we are unable to offer you a loan at this time");
    }
    
     



     
     



    
    return 0;
}