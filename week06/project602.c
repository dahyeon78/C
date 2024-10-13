#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num,j,sum;
	sum=0;
	
	printf("Enter an integer : ");
	scanf("%i", &num);
	
	for(j=0;j<=num;j++)
	 sum += j;

	printf("%i\n", sum);	
	
	return 0;
}