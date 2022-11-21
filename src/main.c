#include "headers/LCD1602.h"

void main()
{
    LCD_Init();
    LCD_ShowChar(1, 1, 'A');
    LCD_ShowString(1, 3, "Hello world");
    LCD_ShowNum(2, 1, 6, 1);
    LCD_ShowSignedNum(2, 3, -5, 1);
    LCD_ShowHexNum(2, 5, 0xEF, 2);
    LCD_ShowBinNum(2, 7, 9, 8);
    while (1)
    {
        /* code */
    }
    
}