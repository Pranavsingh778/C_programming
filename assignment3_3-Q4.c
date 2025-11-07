#include<stdio.h>
int main()
{
    int cx_ID, unit;
    char name[50];
    float total_bill;
    printf("Enter customer ID: ");
    scanf("%d",&cx_ID);
    printf("Enter unit: ");
    scanf("%d",&unit);
    printf("Enter the name of the customer: ");
    scanf("%s",&name);
    if(unit<=199)
    {
        total_bill=unit*1.20;
    }
    else if(unit>=200 && unit<=399)
    {
        total_bill=unit*1.50*(unit -
    }
}
