#include <stdio.h>
#include <string.h>
#include "..\header\calc.h"
#include "..\header\convert.h"
#include "..\header\mstring.h"

void main()
{
    int tongmang[] = {5,6,3,2,7,0,4,6,7,4,3,2,2,5,7,9,7,6,4,3};
    int mang1[] = {1,5,3,7,8,4,3,5};
    int mang2[] = {1,5,3,7,8,4,3,5};
    int mang3[] = {2,5,4,5,2,5};
    int mangchen[] = {2,5,4};
    int sodanhap,vitri;

    size_t n = sizeof(tongmang) / sizeof(int);
    size_t sizemang_1 = sizeof(mang1) / sizeof(int);
    size_t sizemang_2 = sizeof(mang2) / sizeof(int);
    size_t sizemang_3 = sizeof(mang3) / sizeof(int);
    size_t sizemangchen = sizeof(mangchen) / sizeof(int);
//calc.c
    printf("so phan tu tongmang la: %d\n",sizemang_1);
    tinhtongmang(tongmang);
    solonnhat(tongmang);
    sonhonhat(tongmang);
    timvitri(tongmang);
//convert.c    
    sodanhap = nhapsotunhien();
    chuyendoibinary(sodanhap);
    chuyendoiHex(sodanhap);
//mstring.c    
    array_equal(mang1, sizemang_1, mang3, sizemang_3);
    array_equal(mang1, sizemang_1, mang2, sizemang_2);
    chenmang(mang1,sizemang_1,mangchen,sizemangchen,5);

    
}