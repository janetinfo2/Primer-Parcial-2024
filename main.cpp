#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "proc.h"



int main()
{

    FILE *f;
    f = fopen("network_structure.dat", "rb");
    if (f==NULL) 
    {
        printf("error al abrir archivo");
        return 0;
    }
    struct header H;
    fread(&H.header1, sizeof(uint32_t), 1, f);
    fread(&H.header2, sizeof(uint32_t), 1, f);
    uint32_t mask = 0xFF;
    uint32_t cantconex = H.header1 & mask;
    fread(H.ID, sizeof(uint16_t), cantconex, f);
    
    union map umap;
    umap.H= H;
    show_bin16(umap.bin);

   
    return 0;
}