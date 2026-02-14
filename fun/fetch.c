#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[]) {
	FILE *f = fopen("collection_of_all_sins","r");
	FILE *g = fopen(argv[2],"w");
	char *c = "%c%c%c%s%c%c";
	char check[4096];
	char s[10];
	sprintf(s,c,60,'/','/',argv[1],62,'~');
	char i;
	printf("%s\n",s);
	while(fscanf(f,"%[^\n]",check) != EOF) {
	if(strcmp(check,s) == 0) {
		fgetc(f);
		fprintf(g,"//%s\n\n",argv[1]);
		while((i = fgetc(f)) != '?') {
			fputc(i,g);
		}
	}
	fgetc(f);
	}
}
