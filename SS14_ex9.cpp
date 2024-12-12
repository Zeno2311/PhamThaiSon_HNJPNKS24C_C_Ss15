#include <stdio.h>
#include <string.h>

int main() {
    char sigma[50];
    printf("Moi ban nhap : ");
    fgets(sigma, 50, stdin);
    
    char check;
    printf("Ban muon xoa ki tu nao : ");
    scanf("%c", &check);
    
    int length = strlen(sigma);
    int j = 0;

    for (int i = 0; i < length; i++) {
        if (sigma[i] != check) {
            sigma[j++] = sigma[i];
        }
    }
    sigma[j] = '\0'; 
    
    printf("Chuoi sau khi xoa ki tu theo yeu cau : %s\n", sigma);
    return 0;
}
