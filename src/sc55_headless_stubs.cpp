#include <stdint.h>

// Headless LCD stubs for bare-metal/library builds.
// Keep C++ linkage to match lcd.h declarations.

void LCD_Enable(uint32_t enable)
{
    (void)enable;
}

void LCD_Write(uint32_t address, uint8_t data)
{
    (void)address;
    (void)data;
}
