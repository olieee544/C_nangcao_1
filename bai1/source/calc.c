#include <stdio.h>
#include "D:\C_nangcao\bai1\header\calc.h"

void tinhtongmang(int tongmang[])
{
    int sum=0;
    for (int i = 0; i < 20; i++) 
    {
        sum += tongmang[i];
    }
    printf("Tong mang:%d\n", sum);
}

void solonnhat(int tongmang[])
{
    int maxValue = tongmang[0];
    for (int i = 0; i < 20; i++) 
    {
        if (tongmang[i] > maxValue) 
        {
            maxValue = tongmang[i];
        }
    }
    printf("so lon nhat trong mang:%d\n", maxValue);    
}

void sonhonhat(int tongmang[])
{
    int minValue = tongmang[0];
    for (int i = 0; i < 20; i++)
    {
        if (tongmang[i] < minValue) 
        {
            minValue = tongmang[i];
        }
    }
    printf("so lon nhat trong mang:%d\n", minValue);    
}

void timvitri(int tongmang[])
{
    int count = 0;
    int k;
    // printf("nhap so vitri can tim:%d");
    // scanf("%d",&k);
    for (int i = 1; i < 21; i++)
    {
        count++;
        if (tongmang[i] == 7) 
        {
            printf("So 7 o vitri thu:%d\n", count);
        }
    }
    
}