#include <stdio.h>
#include <string.h>
int main(){
    int namSinh, tuoi;
    char chan[] = "chan";
    char le[] = "le";
    printf("Nhap vao nam sinh ");
    scanf("%d", &namSinh);
    tuoi = 2023 - namSinh;
    printf("%d\n", tuoi);
    int tinhTrang = (tuoi % 2 == 0) ? 1 : 0;
    (tinhTrang) ?  printf("%s", chan) : printf("%s",le);
}
