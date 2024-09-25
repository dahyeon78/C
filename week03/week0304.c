#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int giveme;
	float okay;
	
	printf("enter : ");
	scanf("%d", &giveme);
	
	okay = (float)giveme;
	
	printf("%f\n", okay);
	
	return 0;
}