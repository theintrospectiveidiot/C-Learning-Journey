#include<stdio.h>

int carry(int *a,int *b)
{
if(*a>=10){*b += *a / 10;
          *a = *a % 10;}
}

int main(int argc,char* argv[])
{
int A[2],B[2];
for(int i=0;i<2;i++)
{
A[i] = argv[1][1-i] - '0';
B[i] = argv[2][1-i] - '0';
}
int C[4] = {0,0,0,0}; //(99*91) cuz we start from 0 instead of 1. So, B[0] = 1, B[1] = 9. Therefore B = 91
int p = 0;



for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++){p = (A[j])*(B[i]);
                     C[i + j] += p%10;
		     carry(&C[i+j],&C[i+j+1]);
		     C[i + j + 1] += p/10;
		     printf("p = \t%d\t\t",p);
		     for(int k=3;k>=0;k--)
			     printf("%d\t",C[k]);}
printf("\n");
}



for(int i=3;i>=0;i--){printf("%d",C[i]);}
printf("\n");
}
