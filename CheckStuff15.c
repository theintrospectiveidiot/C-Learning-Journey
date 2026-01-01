#include<stdio.h>
#include<string.h>

int main()
{
int i=0,j=0,k=0,l;
int a=0,b=0,c,d;
char A[100],line[1000];
char B[100][100];
printf("Please!\n");

scanf("%[^\n]",line);

for(i=0;i<1000;i++)
{
if(line[i] == 32){k=i;
                 strncpy(B[a],line+j,k-j);
                 j=k+1;
                 a++;}
if(line[i] == '\0')
{strncpy(B[a],line+j,i-j);
                 a++;
                 break;}}

size_t p = strlen(B[0]);
for(i=1;i<a;i++){if(p < strlen(B[i])){p = strlen(B[i]);
                                      b = i;}}
		 
printf("\n%d words are there in the line\n",a);

printf("Before sorting:\n");
for(i=0;i<a;i++){printf("\nB[%d][] = \t%s\n",i,B[i]);}

size_t q = strlen(B[0]);
char n[100];
for(i=0;i<a+6;i++){for(j=1;j<a;j++){if(strlen(B[j-1]) > strlen(B[j])){strcpy(n,B[j]+0);
	                                                              n[strlen(B[j])] = '\0';
                                                                      strcpy(B[j],B[j-1]+0);
								      B[j][strlen(B[j-1])] = '\0';
                                                                      strcpy(B[j-1],n+0);
                                                                      B[j-1][strlen(n)] = '\0';}}}
printf("\nAfter sorting:\n");
for(i=0;i<a;i++){printf("\nB[%d][] = \t%s\n",i,B[i]);}
printf("\n");
for(i=0;i<a;i++){printf("%s ",B[i]);}

printf("\n\n[:^()^:]\n");

}

