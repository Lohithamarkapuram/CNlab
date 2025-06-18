#include <stdio.h>
#include <string.h>

int main() {
    char data[100];
    char sdata[200];
    int i,count=0,j=0;
    printf("Enter the data: ");
    scanf("%s",data);
    for(int i=0;i<strlen(data);i++){
        if(data[i]=='1'){
            count++;
            sdata[j++]=data[i];
        }else{
            count=0;
            sdata[j++]=data[i];
        }
        if(count==5){
            count=0;
            sdata[j++]='0';
        }
    }
    sdata[j]='\0';
    printf("The message after stuffing: %s\n",sdata);
    char rdata[200];
    count=0;j=0;
    for(int i=0;i<strlen(sdata);i++){
        if(sdata[i]=='1'){
            count++;
            rdata[j++]=sdata[i];
        }else{
            count=0;
            rdata[j++]=sdata[i];
        }
        if(count==5){
            count = 0;
            i++;
        }
    }
    rdata[j]='\0';
    printf("The message after removing stuffing: %s\n",rdata);
    
    return 0;
}
