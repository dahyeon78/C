#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char abc, abcd;
	int num, ber;
	
	scanf("%c", &abc);
	
	num = abc - '0';
	ber = num + 1;
	abcd = ber + '0';
	
	printf("%c\n", abcd);
	
	return 0;
}