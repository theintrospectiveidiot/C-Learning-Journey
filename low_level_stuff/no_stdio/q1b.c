//E BHABISYA KUMAR
//2025ITB084
//Q1B

#include<stdio.h>

int main(int argc, char *argv[])
{
FILE *f;
f = fopen(argv[1],"r");

if(f == NULL)
{perror("File doesn't exist\n"); return 1;}

char c;

while((c = fgetc(f)) != EOF) 
{fprintf(stdout,"%c",c);}
}
