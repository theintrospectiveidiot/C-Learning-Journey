#include<stdio.h>

int low(int A[],int p)
{
int a,i;
a = A[0];

for(i=1;i<=p;i++){if(a>A[i]){a = A[i];}}

return a;
}

int main()
{
int A[10];
int k,i,t,j;

for(i=0;i<10;i++)
{
scanf("%d",&A[i]);}

for(j=0;j<10;j++){

k = low(A,9-j);
	
for(i=0;i<9-j;i++)
{if(A[i] == k){t = A[i];
               A[i] = A[9-j];
               A[9-j] = t;}}}

for(i=9;i>=0;i--){printf("%d\t",A[i]);}
printf("\n");

}
