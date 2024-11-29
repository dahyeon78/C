#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	
	int ID;
	char name[10];
	double grade;
};

int main(int argc, char *argv[]) {
	
	struct student s1={24, "Dahyeon", 4.23};
	
	s1.ID=23;
	strcpy(s1.name, "Kim Dahyeon");
	s1.grade=4.00;
	
	printf("ID: %d\nname: %s\ngrade: %.2f\n", s1.ID, s1.name, s1.grade);
	
	return 0;
}