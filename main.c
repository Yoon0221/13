#define MAX_NAME 20
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct student
{
	int ID;
	char name[MAX_NAME];
	double grade;
};
	
	
int main(int argc, char *argv[]) 
{
	struct student student1 = {1003, "JuyeopKim", 4.3};     // instance
	
	student1.ID = 1020;
	strcpy(student1.name, "KimJuyeop");
	student1.grade = 3.3;
	
	printf("ID : %i\n", student1.ID);
	printf("name : %s\n", student1.name);
	printf("grade : %lf\n", student1.grade);
	
	return 0;
}
