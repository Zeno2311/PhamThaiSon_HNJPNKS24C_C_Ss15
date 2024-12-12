#include<stdio.h>
#include<string.h>
int main(){
	char sigma[50];
	char Index;
	int count;
	printf("Nhap chuoi: ");
	fgets(sigma, 50, stdin);
	for (int i=0; i<strlen(sigma)-1; i++){
		if(sigma[i]==' '){
			continue;
		}
		count=1;
		Index=sigma[i];
		for (int j=i+1; j< strlen(sigma); j++){
			if (sigma[i]==sigma[j]){
				for (int k=j;k<strlen(sigma);k++){
					sigma[k]=sigma[k+1];
				}
				count++;
			}
		}
		printf("%c = %d\n", Index, count);
	}
	return 0;
}
