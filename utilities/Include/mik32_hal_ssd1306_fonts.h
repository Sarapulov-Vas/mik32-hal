/* this module was made on the basis of stm32-ssd1306 library https://github.com/afiskon/stm32-ssd1306 */

#ifndef __SSD1306_FONTS_H__
#define __SSD1306_FONTS_H__

#include "mik32_hal_ssd1306.h"
#define SSD1306_INCLUDE_FONT_6x8
#ifdef SSD1306_INCLUDE_FONT_6x8
extern const HAL_SSD1306_Font Font_6x8;
#endif
#ifdef SSD1306_INCLUDE_FONT_7x10
extern const HAL_SSD1306_Font Font_7x10;
#endif
#ifdef SSD1306_INCLUDE_FONT_11x18
extern const HAL_SSD1306_Font Font_11x18;
#endif
#ifdef SSD1306_INCLUDE_FONT_16x26
extern const HAL_SSD1306_Font Font_16x26;
#endif
#ifdef SSD1306_INCLUDE_FONT_16x24
extern const HAL_SSD1306_Font Font_16x24;
#endif
#ifdef SSD1306_INCLUDE_FONT_16x15
/** Generated Roboto Thin 15 
 * @copyright Google https://github.com/googlefonts/roboto
 * @license This font is licensed under the Apache License, Version 2.0.
*/
extern const HAL_SSD1306_Font Font_16x15;
#endif

#endif // __SSD1306_FONTS_H__
