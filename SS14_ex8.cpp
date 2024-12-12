#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char sigma[50];
	printf("Moi ban nhap : ");
	fgets(sigma, 50, stdin);
	for(int i = 0; i < strlen(sigma); i++){
		sigma[0] = toupper(sigma[0]);
		if(sigma[i] == ' '){
			sigma[i + 1] = toupper(sigma[i + 1]);
		}
	}
	printf("\nBan da nhap : ");
	fputs(sigma, stdout);
	return 0;
}
