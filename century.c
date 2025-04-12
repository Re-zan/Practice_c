#include<stdio.h>
#define PERHOUR .5

int main(){

        int  year, century;
        scanf("%d", &year) ;
        if(year % 100==0){
                century= year/100;
        }else{
                century= year/100 +1;
        }
        printf("%d", century);
        return 0;
}