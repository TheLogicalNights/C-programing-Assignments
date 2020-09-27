#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
#define ERROR -1
#define BUFF_SIZE 80

typedef int BOOL;

BOOL Read(char *,int);
