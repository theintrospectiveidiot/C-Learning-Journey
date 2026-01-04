#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{
char word[100];
int word_count = 0,i,a=0;
char A[100],B[100];

strcpy(A,argv[1]);
A[strlen(argv[1])] = ',';
A[strlen(argv[1]) + 1] = '\0';

strcpy(B,argv[1]);
B[strlen(argv[1])] = '.';
B[strlen(argv[1]) + 1] = '\0';

while(scanf("%s",word) == 1) 
{
word_count++;
if(strcmp(word,argv[1]) == 0 || strcmp(word,A) == 0 || strcmp(word,B) == 0){printf("Yes, the word is there and is word no. %d\n",word_count);
a++;}
}

if(a >= 1)
	printf("So, yes the word is there, and is repeated %d time(s)\n",a);
else printf("Sorry, the word is not there in the file...\n");

printf("%s\t%s\n",A,B);
}
