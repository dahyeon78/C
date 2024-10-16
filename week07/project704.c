#include <stdio.h>
#include <stdlib.h>

int combination(int a, int b, int c) {
	
	int ans;
	ans=a/(b*c);
	
	return ans;
}

int factorial(int n) {
	
	int res=1;
	
	for(int i=1;i<=n;i++)
	 res=res*i;
	 
	return res;	
}

int get_integer() {
	
	int input;
	
	printf("Enter the value : ");
	scanf("%i", &input);
	
	return input;
}

int main(int argc, char *argv[]) {
	
	int nnn, rrr, uuu;
	int aa,bb,cc;
	int fin;
	
    nnn=get_integer();
    rrr=get_integer();
    uuu=nnn-rrr;
	
	aa=factorial(nnn);
	bb=factorial(uuu);
	cc=factorial(rrr);
	
	fin=combination(aa,bb,cc);
	
	printf("The result of C(%i, %i) is %i.", nnn, rrr, fin);
	
	return 0;
}