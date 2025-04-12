#include<stdio.h>
#include<math.h>

int main(){

        float x1, x2, y1, y2;
       
        scanf("%f %f %f %f", &x1, &y1,&x2, &y2) ;
        float distancePoint =sqrt(pow((x2-x1), 2) + pow((y2 -y1),2));
        
        printf("Distance between the said points: %.2f", distancePoint);
        return 0;
}