#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num;
	
	printf("Enter an integer : ");
	scanf("%i", &num);
	
	if(num<0)
	 num=-num;
	else
	 num=num;
	 
	printf("%i", num);
	 
	return 0;
}