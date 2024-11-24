#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	FILE*fp;
	char word1[100], word2[100], word3[100];
	
	fp=fopen("sample.txt", "w");
	if(fp==NULL) {
		printf("File isn't opened.");
		return 1;
	}
	
	printf("Input a world : ");
	scanf("%s", word1);
	printf("INput a world : ");
	scanf("%s", word2);
	printf("Input a world : ");
	scanf("%s", word3);
	
	fprintf(fp, "%s %s %s", word1, word2, word3);
	
	fclose(fp);
	
	return 0;
}