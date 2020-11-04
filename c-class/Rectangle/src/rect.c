/*************************************************************************
	> File Name: rect.c
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Wed 04 Nov 2020 07:12:13 PM CST
 ************************************************************************/

#include <rect.h>

// 构造函数
void Rectangle_ctor(Rectangle * const me, int16_t x, int16_t y, uint16_t width, uint16_t height) {
    /* first call superclass’ ctor */
    Shape_ctor(&me->super, x, y);

    /* next, you initialize the attributes added by this subclass... */
    me->width = width;
    me->height = height;
}
