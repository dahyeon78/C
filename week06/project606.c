#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=170;
    int tri=0;
    int mya;
    
    do {
    printf("Guess a number! : ");
    scanf("%i", &mya);
    tri++;
    
     if(mya<170) {
     printf("Low!\n");
     }
     else if(mya>170) {
     printf("High!\n");
     }
     else {
     printf("Answer! Trial:%i", tri);
     }
    } while(mya!=170);
     
	return 0;
}