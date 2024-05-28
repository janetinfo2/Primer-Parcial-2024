#pragma once

struct header
{
    uint32_t header1; 
    uint32_t header2;
    uint16_t ID[256];
};
union map
{
   struct header H;
   uint16_t bin;
};

void show_bin16(uint16_t value);
void showIDs()
