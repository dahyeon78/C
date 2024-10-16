#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		
	int num, ber, sum;
	sum=0;
	
	printf("Enter a number : ");
	scanf("%i", &num);
	
	for(ber=0;ber<=num;ber++) {
	 sum+=ber;
}
	
	printf("the result is %i\n", sum);
	
	return 0;
}