#include <stdio.h>
int main(){
    int m;
    printf("enter a number");
    scanf("%d",&m);
    if(m>=90){
        printf("grade a");
    } else if(m<90&&m>=80){
        printf("grade b");
    } else if(m<70&&>=60){
        printf("grade c");
    }


