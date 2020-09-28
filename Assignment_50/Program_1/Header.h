#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct Student
{
	char name[80];
	int rollno;
	int marks;
};

BOOL Insert(char *,int);


