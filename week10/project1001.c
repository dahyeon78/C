#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int score[5];
	
	score[0]=10;
	score[1]=20;
	score[2]=30;
	score[3]=40;
	score[4]=50;
	
	for(i=0;i<5;i++)
	{
		printf("Score is %d\n", score[i]);
	}
	
	return 0;
}