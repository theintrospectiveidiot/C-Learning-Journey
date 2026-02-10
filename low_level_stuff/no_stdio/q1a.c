//E BHABISYA KUMAR
//2025ITB084
//Q1A

#include<stdio.h>

int main(int argc, char *argv[])
{
FILE *f;
f = fopen(argv[1],"w");

char c;
while((c = getchar()) != EOF) {
	fputc(c,f);
}
fclose(f);
}
