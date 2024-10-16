#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num;
	
	printf("Enter an integer : ");
	scanf("%i", &num);
	
	if(num<0)
	 printf("This is a negative number.\n");
	else if(num==0)
	 printf("This is 0.");
	else
	 printf("This is a positive number.\n");
	
	return 0;
}