#include<stdio.h>
#include<math.h>
int main(){
    int number, reverseNumber,sum;
    scanf("%d",&number);
   int nDigits = ceil(log10(abs(number)));
    for (int i = 0; i < nDigits; i++)
    {
        reverseNumber=reverseNumber*10+number%10;
        sum+=(number%10);
        number=number/10;
    }
    printf("%d\n",sum);
    printf("%d",reverseNumber);
}
