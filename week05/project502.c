#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num, ber;
	int plu, min, mul, div, rem; 
	
	printf("Input two intergers : ");
	scanf("%d %d", &num, &ber);
	
	printf("%d, %d has been received.\n", num, ber);
	
	plu = num+ber;
	min = num-ber;
	mul = num*ber;
	div = num/ber;
	rem = num%ber;
	
	printf("+ result is %d\n", plu);
	printf("- result is %d\n", min);
	printf("* result is %d\n", mul);
	printf("/ result is %d\n", div);
	printf("%% result is %d\n", rem);
	
	return 0;
}