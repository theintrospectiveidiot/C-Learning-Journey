#include<stdio.h>

#define SIZE s

int carry(int *a,int *b)
{
if(*a>=10){*b += *a / 10;
          *a = *a % 10;}
}

int main(int argc,char* argv[])
{
int s;
s = argv[1][0] - '0';

int A[SIZE],B[SIZE];
for(int i=0;i<SIZE;i++)
{
A[i] = argv[2][SIZE-1-i] - '0';
B[i] = argv[3][SIZE-1-i] - '0';
}
int C[SIZE*2];
for(int i=0;i<(SIZE*2);i++)
C[i] = 0; 

int p = 0;

for(int i=0;i<SIZE;i++)
{
for(int j=0;j<SIZE;j++){ p = (A[j])*(B[i]);
                         C[i + j] += p%10;
           	    	     carry(&C[i+j],&C[i+j+1]);
		                 C[i + j + 1] += p/10;
		                 printf("p = %d*%d = %d\t",A[j],B[i],p);
		                 for(int k=(SIZE*2)-1;k>=0;k--)
		                	printf("%d  ",C[k]);
		                printf("\t");}
printf("\n");
}



for(int i=(SIZE*2)-1;i>=0;i--){printf("%d",C[i]);}
printf("\n");
}
