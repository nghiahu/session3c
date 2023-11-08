#include<stdio.h>
int main(){
 float math, literature, english;
	scanf("%f %f %f", &math, &literature, &english);
	 float sum,total;
    sum= math+literature+english;
    total=sum/3;
    printf("tong diem la: %.2f\n",sum);
    printf("diem trung binh la: %.2f",total);

}
