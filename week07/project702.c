#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo(int a, int b) {
    return a + b;
}

int square(int n) {
    return n * n;
}

int get_max(int x, int y) {
    if (x > y) {
        return x;
    } else if (x == y) {
        printf("Same.\n");
        return x; // 또는 return y;
    } else {
        return y;
    }
}

int main() {
    int num, ber;

    printf("Enter the integers: ");
    scanf("%i %i", &num, &ber);
    
    printf("Result - \n");
    
    printf("Sum: %i\n", sumTwo(num, ber));
    printf("Square: %i\n", square(num));
    printf("Max: %i\n", get_max(num, ber));
    
    return 0;
}