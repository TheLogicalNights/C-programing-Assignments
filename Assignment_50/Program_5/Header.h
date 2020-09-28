#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

struct Student
{
	char name[80];
	int rollno;
	int marks;
};

int AddMarks(char *);
