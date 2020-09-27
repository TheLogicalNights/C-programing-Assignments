#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
#define BUFF_SIZE 80

typedef int BOOL;

BOOL Frequency(char *,char,int *);
