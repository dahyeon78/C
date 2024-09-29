#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int giveme, div;
	float okay, ans, fin;
	
	printf("Enter the first number : ");
	scanf("%d", &giveme);
	
	printf("Enter the second number : ");
	scanf("%d", &div);
	
	okay = (float)giveme;
	ans = (float)div;
	
	fin = okay / ans;
	
	printf("%f / %f = %f\n", okay, ans, fin);
	
	return 0;
}