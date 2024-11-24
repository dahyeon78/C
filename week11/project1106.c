#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	FILE*fp=NULL;
	
	char c;
	
	fp=fopen("sample.txt", "r");
	
	if(fp==NULL)
	 printf("File isn't opened.");
	 
	while((c=fgetc(fp))!=EOF)
	 putchar(c);
	 
	fclose(fp);
	
	return 0;
}