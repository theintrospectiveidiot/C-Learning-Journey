#include<stdio.h>
#include<string.h>

//12

const char *s = "#include<stdio.h>%c#include<string.h>%c%c//%d%c%cconst char *s = %c%s%c;%c%cvoid wired(const char *s,int n) {%c%cchar *q = %c//%%d%c;%c%cchar r[10];%c%csprintf(r,q,n);%c%cint i = 0;%c%csize_t l = strlen(s);%c%cchar *p = %cn = %%d%c;%c%cchar z[10];%c%csprintf(z,p,n);%c%csize_t l1 = strlen(r);%c%csize_t l2 = strlen(z);%c%cwhile(i < l) {%c%c%cif(strncmp(&s[i],r,l1) == 0) {%c%c%c%cprintf(%c//%%d%c,n+1);%c%c%c%ci += l1;%c%c%c}%c%c%cif(strncmp(&s[i],z,l2) == 0) {%c%c%c%cprintf(%cn = %%d%c,n+1);%c%c%c%ci += l2;%c%c%c}%c%c%celse {putchar(s[i]);%c%c%ci++;}%c%c}%c}%c%cint main() {%c%cchar string[4096];%c%cint n = %d;%c%csprintf(string,s,10,10,10,n,10,10,34,s,34,10,10,10,9,34,34,10,9,10,9,10,9,10,9,10,9,34,34,10,9,10,9,10,9,10,9,10,9,10,9,9,10,9,9,9,34,34,10,9,9,9,10,9,9,10,9,9,10,9,9,9,34,34,10,9,9,9,10,9,9,10,9,9,10,9,9,10,9,10,10,10,10,9,10,9,n,10,9,10,9,10,10);%c%cwired(string,n);%c}%c";

void wired(const char *s,int n) {
	char *q = "//%d";
	char r[10];
	sprintf(r,q,n);
	int i = 0;
	size_t l = strlen(s);
	char *p = "n = %d";
	char z[10];
	sprintf(z,p,n);
	size_t l1 = strlen(r);
	size_t l2 = strlen(z);
	while(i < l) {
		if(strncmp(&s[i],r,l1) == 0) {
			printf("//%d",n+1);
			i += l1;
		}
		if(strncmp(&s[i],z,l2) == 0) {
			printf("n = %d",n+1);
			i += l2;
		}
		else {putchar(s[i]);
		i++;}
	}
}

int main() {
	char string[4096];
	int n = 12;
	sprintf(string,s,10,10,10,n,10,10,34,s,34,10,10,10,9,34,34,10,9,10,9,10,9,10,9,10,9,34,34,10,9,10,9,10,9,10,9,10,9,10,9,9,10,9,9,9,34,34,10,9,9,9,10,9,9,10,9,9,10,9,9,9,34,34,10,9,9,9,10,9,9,10,9,9,10,9,9,10,9,10,10,10,10,9,10,9,n,10,9,10,9,10,10);
	wired(string,n);
}
