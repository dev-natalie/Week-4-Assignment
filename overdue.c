//program to calculate the fine for overdue library books
#include <stdio.h>
int main() {
    int bookID;
    int dueDate;
    int returnDate;
    int finerate;

    printf("enter the bookID:");
    scanf("%d",&bookID);
    printf("enter the dueDate:");
    scanf("%d",&dueDate);
    printf("enter the returnDate:");
    scanf ("%d",&returnDate);

    int daysoverdue;
    daysoverdue=returnDate - dueDate;

    if (daysoverdue <=7) {
        printf("the bookID is %d \n",bookID);
        printf("the dueDate is %d \n",dueDate);
        printf("the returnDate is %d \n",returnDate);
        printf("the daysoverdue is %d \n",daysoverdue);
        printf("the fine rate is ksh 20 per day \n",finerate);
        int fineamount;
        fineamount=daysoverdue * 20;
        printf("the fine amount: %d \n",fineamount);

         return 0;
    } else if (daysoverdue <=14) {
        printf("the dueDate is %d \n",dueDate);
        printf("the returnDate is %d \n",returnDate);
        printf("the daysoverdue is %d \n",daysoverdue);
        printf("the fine rate is ksh 50 per day \n",finerate);
        int fineamount;
        fineamount=daysoverdue * 50;
        printf("the fine amount: %d \n",fineamount);

        return 0;
       
    } else {
         printf("the dueDate is %d \n",dueDate);
        printf("the returnDate is %d \n",returnDate);
        printf("the daysoverdue is %d \n",daysoverdue);
        printf("the fine rate is ksh 100 per day \n",finerate);
        int fineamount;
        fineamount=daysoverdue * 100;
        printf("the fine amount: %d \n",fineamount);
    }
       
        

        return 0;
}
    
        
        