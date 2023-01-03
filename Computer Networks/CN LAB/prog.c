#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void dump(const uint8_t *screen)
{
    const uint8_t *s = screen;
    for (int y = 0; y < 25; y++)
    {
        for (int x = 0; x < 40; x++, s++)
        {
            printf("%c", *s == 0xa0 ? '#' : '.');
        }
        printf("\n");
    }
}

void setreg(uintptr_t dst, uint8_t v)
{
    //  *((uint8_t *)dst) = v;
}

int main()
{
    //  uint8_t* screenRAM = (uint_8*)0x0400;
    uint8_t *screenRAM = (uint8_t *)calloc(40 * 25, 0x20);

    setreg(0xd020, 0); // Set border color
    setreg(0xd021, 0); // Set background color

    int yslope = (25 << 8) / 40;
    int yf = yslope / 2;
    for (int x = 0; x < 40; x++)
    {
        int yi = yf >> 8;
        // First line
        screenRAM[x + yi * 40] = 0xa0;
        // Second line (X-mirrored)
        screenRAM[(39 - x) + yi * 40] = 0xa0;
        yf += yslope;
    }

    dump(screenRAM);
}