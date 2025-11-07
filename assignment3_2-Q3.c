#include <stdio.h>
int main() {
    float t;
    scanf("%f",&t);
    if(t<0)
        printf("Freezing weather");
    else{
        if(t<10)
            printf("Very Cold weather");
        else{
            if(t<20)
                printf("Cold weather");
            else{
                if(t<30)
                    printf("Normal in Temp");
                else{
                    if(t<40)
                        printf("It's Hot");
                    else
                        printf("It's Very Hot");
                }
            }
        }
    }
    return 0;
}
