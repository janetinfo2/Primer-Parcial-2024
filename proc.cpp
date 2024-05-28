#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "proc.h"

void show_bin16(uint16_t value) 
{
    int CantBit = sizeof(value)*8;
    int j=0;
    for(int i=0;i<CantBit;i++)
    {
       printf("%d",(value>>CantBit-1-i)&1);
       j++;
       if(j==4)
       {
          printf(" ");
       }
       if(j==8 && i!= CantBit-1)
       {
        printf(" - ");
        j=0;
       }
       
    }
}