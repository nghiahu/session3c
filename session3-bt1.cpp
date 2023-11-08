#include<stdio.h>
int main(){
    const float PI=3.14;
    int r;
    scanf("%d",&r);
    float area, perimeter;
    area = r*r*PI;
    perimeter=r*2*PI;
    printf("dien tich cua hinh tron co ban kinh %d la: %.2f\n",r,area);
    printf("chu vi cua hinh tron co ban kinh %d la: %.2f\n",r,perimeter);
}
