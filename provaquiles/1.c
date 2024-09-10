#include <stdio.h>
#include <string.h>

void criptografia(char string[]){
	int x = strlen(string)-1;
	for (int i = 0; i<x ;i++) {
		string[i] +=1;
	};
}

void descriptografia(char string[]){
	int x = strlen(string)-1;
	for (int i = 0; i<x ;i++) {
		string[i] -=1;
	};
}

int main(){
	char a[100];
	fgets(a, 100, stdin);
	criptografia(a);
	puts(a);	
	descriptografia(a);
	puts(a);
	return 0;
}
