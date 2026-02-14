#include<stdio.h>

int main(int argc,char *argv[]) {
	FILE *g = fopen("collection_of_all_sins","a+");
	FILE *f = fopen(argv[1],"r");
	char c;
	fputc(60,g);
	while((c = fgetc(f)) != 10) {
		fputc(c,g);
	}
	fputc(62,g);

	fputc('~',g);
	while((c = fgetc(f)) != EOF) {
		fputc(c,g);	
	}
	fputc('?',g);
	fputc(10,g);
}
