//E BHABISYA KUMAR
//2025ITB084
//Q2B

#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>


int main(int argc,char *argv[]) {
	char c,A[64],B[1024];
	int f = open(argv[1],O_RDONLY);
	ssize_t r, i=0,j=0;
	while((r = read(f,A,64)) != 0) {
	write(1,A,r);
	}
}
