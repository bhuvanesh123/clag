//structures
#include<stdio.h>

struct employee
{
	int id;
	char name[20];
	float sal;


};
int main()
{
	struct employee e1 ;
	e1.id = 301;
	e1.name[20] = "bhuvi";
	e1.sal = 100.40;
		printf("%d\n", e1.id);
		printf("%c\n", e1.name);
		printf("%f\n", e1.sal);

}
