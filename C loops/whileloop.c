// while loop for no 1-10, their squares and sums
#include <stdio.h>
int main() {
    int i = 1, sum = 0, sumOfSquares = 0;
    while (i <= 10) {
        sum += i; 
        sumOfSquares += i * i;  
        printf(" %d\t%d\n", i, i * i); 
        i++;
    }
    printf("\nSum of numbers from 1 to 10: %d\n", sum);
    printf("Sum of squares of numbers from 1 to 10: %d\n", sumOfSquares);

    return 0;
}