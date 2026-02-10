//E BHABISYA KUMAR
//2025ITB084
//Q2D

#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>


int main(int argc,char *argv[]) {
	char c,A[64];
	int f = open(argv[1],O_RDONLY);
	ssize_t r, i=0,j=0;
	if(f == -1) {
		write(2,"Error opening file\n",19);
		return 1;
	}
	while((r = read(f,A,64)) != 0) {
	write(1,A,r);
	}
}
