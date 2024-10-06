#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int give, me;
	int fir, sec, thi, f, fif;
	
	printf("Input two integers : ");
	scanf("%i %i", &give, &me);
	
	fir=give&me;
	sec=give|me;
	thi=give^me;
	f=give<<1;
	fif=give>>1;
	
	printf("& result is %i\n", fir);
	printf("| result is %i\n", sec);
	printf("^ result is %i\n", thi);
	printf("<<1 result is %i\n", f);
	printf(">>1 result is %i\n", fif);
	
	return 0;
}