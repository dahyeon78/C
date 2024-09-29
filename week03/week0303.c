#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char abc, def;
	int num, ber;
	
	printf("Enter a character : ");
	scanf(" %c", &abc);
	
	num = abc - '0';
	ber = num + 1;
	def = ber + '0';
	
	printf("The next character of %c is %c\n" , abc, def);
	
	return 0;
}