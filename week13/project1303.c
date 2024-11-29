#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

struct student {
	
	int ID;
	int score;
};

int main(void) {
	
	struct student s[STUDENTNUM];
	
    int i;
    
	for(i=0; i<STUDENTNUM; i++) {
		printf("Input the ID : ");
		scanf("%d", &s[i].ID);
		
		printf("Input the score : ");
		scanf("%d", &s[i].score);
	}
	
	int sum=0;
	
	for(i=0; i<STUDENTNUM; i++) {
		sum+=s[i].score;
	}
	
	double average=(double)sum/STUDENTNUM;
	printf("The average of the score : %.2f\n", average);
	
	int maxscore=s[0].score; //easy to compare
	int maxID=s[0].ID;
	
	for(i=0; i<STUDENTNUM; i++) {
		if(s[i].score>maxscore) {
			maxscore=s[i].score;
			maxID=s[i].ID;
		}
	}
	
	printf("The highest score - ID: %d, score: %d\n", maxID, maxscore);
	
	return 0;
}
