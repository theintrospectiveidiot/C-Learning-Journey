//E BHABISYA KUMAR
//2025ITB084
//Q2C

#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include"everything_everywhere_all_at_one.h"

int main(int argc,char *argv[]) {
	char c,A[64],B[1024];
	ssize_t r,i=0,j=0;
	int f = open(argv[1],O_RDONLY | O_WRONLY);
	cant_open(f,argv[1]);
	while((r = read(0,A,64)) > 0) {
	write(f,A,r);
	}

	close(f);
}

