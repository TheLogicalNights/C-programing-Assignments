#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

struct Student
{
	char name[80];
	int rollno;
	int marks;
};

void Display(char *,int);
