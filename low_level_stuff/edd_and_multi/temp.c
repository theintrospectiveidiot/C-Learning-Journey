#include<stdio.h>
#include<string.h>

int main() {
	char *s = "Hello there.";
	size_t t = strlen(s);
	for(int i=0;i<t;i++) {
		printf("%c%c",s[i]^10,(i != t-1) ? 0:10);
	}
}
