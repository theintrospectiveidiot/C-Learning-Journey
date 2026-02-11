#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[]) {
	char *s = argv[1];
	size_t l = strlen(s);
	for(int i=0;i<256;i++) {
		printf("%d\t",i);
		for(int j=0;j<l;j++) {
			printf("%c",s[j]^i);
		}
		printf("\n");
	}
}
