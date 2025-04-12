#include<stdio.h>
#define PERHOUR .5

int main(){

        float time;
       
        scanf("%f", &time) ;
        float totalLiter =time * PERHOUR;
        int i = (int)totalLiter;
        printf("%d", i);
        return 0;
}