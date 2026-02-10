//E BHABISYA KUMAR
//2025ITB084
//Q2A

#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
int main() {
	char c,A[1],B[1024];
	ssize_t r, i=0,j=0;
	while(read(0,A,1) != 0) {
		B[i] = A[0];
		i++;
	}
	write(1,B,i);
}
