#include<stdio.h>

int main(){
         int id, amountPerHour ;
        float workingHour;
        scanf("%10d", &id);
        int c;
        while ((c= getchar()) !=' ' && c !='\n' );
        scanf("%d %f", &amountPerHour, &workingHour);
        float salary =amountPerHour * workingHour;
        
        printf("Employees ID = %d\nSalary = U$ %.2f", id,salary);
        return 0;
}