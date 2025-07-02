#include <stdio.h>
#include <string.h>

int main() {
    int x,i;
    char data[100];
    printf("Enter the data: ");
    scanf("%s",data);
    printf("\nPlease choose following options:\n");
    printf("1 = Encrypt the string.\n");
    printf("2 = Decrypt the string.\n");
    scanf("%d", &x);
    switch(x){
        case 1 :
            for(i=0;data[i]!='\0';i++){
                data[i]+=4;
            }
            printf("\nEncrypted string: %s\n", data);
            break;
        case 2 :
            for(i=0;i<data[i]!='\0';i++){
                data[i]-=4;
            }
            printf("\nEncrypted string: %s\n", data);
            break;
        default:
            printf("\nError\n");
    }
    return 0;
}
