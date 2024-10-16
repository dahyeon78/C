#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num, ber, ans=0;
    char pic;
    
    printf("Enter the calculation : ");
    scanf("%i %c %i",&num, &pic, &ber);
   
    switch(pic) {
     case '+':
      ans=num+ber;
      break;
     
     case '-':
      ans=num-ber;
      break;
     
     case '*':
      ans=num*ber;
      break;
      
     case '/':
      ans=num/ber;
      break;
      
     case '%':
      ans=num%ber;
      break;
    }
    
    printf("=%i\n", ans);

	return 0;
}