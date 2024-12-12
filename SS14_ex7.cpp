#include <stdio.h>
#include <string.h>

int main() {
    char sigma[50];
    int checkchu = 0, checknumber = 0, checkkitudb = 0;

    printf("Moi ban nhap vao chuoi ki tu : ");
    fgets(sigma, 50, stdin);

    for (int i = 0; i < strlen(sigma); i++) {
        if ((sigma[i] >= 'a' && sigma[i] <= 'z') || (sigma[i] >= 'A' && sigma[i] <= 'Z')) {
            checkchu++;
        }
        else if (sigma[i] >= '0' && sigma[i] <= '9') {
            checknumber++;
        }
        else if (sigma[i] != '\n') {
            checkkitudb++;
        }
    }

    printf("So luong chu cai : %d\n", checkchu);
    printf("So luong so : %d\n", checknumber);
    printf("So ki tu dac biet : %d\n", checkkitudb);
    
    return 0;
}
