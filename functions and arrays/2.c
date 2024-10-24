// arrays in c 2D arrays
#include<stdio.h>
int main() {
	int i,j;
	int marks[2][2]={{10,20},{30,40,}};
	for (i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("marks[%d][%d]=%d \n",i,j, marks[i][j]);
		}
	}
	return 0;
	}