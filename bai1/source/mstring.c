#include "D:\C_nangcao\bai1\header\mstring.h"
#include<stdio.h>
#include <string.h>
void array_equal(const int* array1, size_t size1, const int* array2, size_t size2)
{
    if (size1 != size2) 
    {
        printf("\nmang khong khop: false\n");
    }

    if(memcmp(array1, array2, size1 * sizeof(int)) == 0)
    {
        printf("mang khop: TRUE\n");
    }
}
void chenmang(int *mang1 , size_t size1 , int *mangchen , size_t sizechen , int position)
{
    int c;
    
    if(position >= 0 && position <= size1) 
    {
        for (c = size1 + sizechen - 1; c >= position ; c--)
        {
           mang1[c] = mang1[c-sizechen]; 
        }

        for(c = position; c < position + sizechen; c++)
        {
           mang1[c] = mangchen[c-position];
	    }

        printf("Mang sau khi chen:\n");

        for (c = 0; c <= sizechen + size1 -1; c++)
        {
            printf("%d\n", mang1[c]);
        }	
	}
    
    else
    {
        printf("Khong the chen mang !");
    }

}