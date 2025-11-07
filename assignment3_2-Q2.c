#include <stdio.h>
int main() {
    int roll;
    char name[50];
    float m1,m2,m3,total,per;
    printf("Enter roll number: ");
    scanf("%d",&roll);
    printf("Enter name: ");
    scanf("%s",name);
    printf("Enter marks: ");
    scanf("%f%f%f",&m1,&m2,&m3);
    total=m1+m2+m3;
    per=(total/300)*100;
    printf("Roll No: %d\n",roll);
    printf("Name: %s\n",name);
    printf("Total Marks: %.2f\n",total);
    printf("Percentage: %.2f%%\n",per);
    if(per>=60)
        printf("Division: First");
    else{
        if(per>=50)
            printf("Division: Second");
        else{
            if(per>=40)
                printf("Division: Third");
            else
                printf("Division: Fail");
        }
    }
    return 0;
}
