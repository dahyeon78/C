#include <stdio.h>
#define SIZE 5

int main(int argc, char *argv[])
{
	int i, average;
	int sum;
	int grade[SIZE];
	
	sum=0;
	
	for(i=0; i<SIZE; i++)
	{
		printf("Enter the score of student : ");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
	
	average = sum/SIZE;
	printf("Score average : %d\n", average);
	 
	return 0;
}