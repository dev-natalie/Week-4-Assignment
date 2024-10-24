#include<stdio.h>
int main() {
	int customerID,unitconsumed;
	char customername[7];
	float chargesperunit,totalbill,surcharge;
	
	printf("enter your customername:");
	scanf("%s", &customername[7]);
	printf("enter your customerID:");
	scanf("%d",&customerID);
	printf("enter unitconsumed:");
	scanf("%d",&unitconsumed);
	
	if(unitconsumed<=199) {
	chargesperunit=1.20;}
	else if (unitconsumed>=200 & unitconsumed<400) {
	chargesperunit=1.50;}
	else if (unitconsumed>=400 & unitconsumed<600) { chargesperunit=1.80;}
	else{
	chargesperunit=2.00; }
	
//calculate the total bill
totalbill=unitconsumed * chargesperunit;
//bill exceeds ksh 400 surcharge of 15%
if (totalbill>400) {
	surcharge=0.15 * totalbill;}
//the minimum bill is ksh100
if(totalbill>100) {
	totalbill=100;}
	
	printf("customername:%s\n",customername);
	printf("customerID:%d\n",customerID);
	printf("unitconsumed:%d\n",unitconsumed);
	printf("chargesperunit:ksh%f\n",chargesperunit);
	printf("totalamounttopay:ksh%f\n",totalbill);
	
	return 0;
	}