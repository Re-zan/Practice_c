#include<stdio.h>

int main(){
      int money;
       scanf("%d", &money);
       
       if(money >1000){
        printf("I will buy Punjabi\n");
         if(money - 1000 >=500){
         printf("I will buy new shoes\nAlisa will buy new shoes");
         }
       }
        else{
        printf("Bad luck!");
       }
        return 0;
}