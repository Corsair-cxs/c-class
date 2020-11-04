/*************************************************************************
	> File Name: circle.h
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Wed 04 Nov 2020 07:32:56 PM CST
 ************************************************************************/

#ifndef _CIRCLE_H
#define _CIRCLE_H

#include "shape.h"

#ifndef PI
#define PI 3.1415926
#endif
//圆的属性
typedef struct {
    Shape super;  //继承自shape

    //自己的属性
    uint16_t rad;
} Circle;
void Circle_ctor(Circle * const me, int16_t x, int16_t y, uint16_t rad);

#endif
