#include "D:\C_nangcao\bai1\header\convert.h"
#include<stdio.h>
int nhapsotunhien()
{   
    int a;
    printf("hay nhap 1 so tu nhien:");
    scanf("%d",&a);
    return a;
}
void chuyendoibinary(int n)
{
    int buff[8],i;  
    for(i=0;i<8;i++)  
    {  
        buff[i]=n%2;  
        n=n/2;  
    }  
        printf("\nso nhi phan cua %d la :0b",n);  
    for(i=i-1;i>=0;i--)  
    {  
        printf("%d",buff[i]);  
    }  
        printf("\nda chuyen doi binary\n");  
}

void chuyendoiHex(int n) 
{
    if (n < 16)  
    {
        printf("ma hex la:0x%c","0123456789ABCDEF"[n]); 
        return;
    } 
    else 
        chuyendoiHex(n / 16);
        printf("%c","0123456789ABCDEF"[n % 16]);
}