/*************************************************************************
	> File Name: circle.c
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Wed 04 Nov 2020 07:41:59 PM CST
 ************************************************************************/

#include "circle.h"
#include <stdio.h>


// Rectangle 虚函数
static uint32_t Circle_area_(Shape const * const me);
static void Circle_draw_(Shape const * const me);

// 构造函数
void Circle_ctor(Circle * const me, int16_t x, int16_t y,
                    uint16_t rad)
{
    static struct ShapeVtbl const vtbl =
    {
        &Circle_area_,
        &Circle_draw_
    };
    Shape_ctor(&me->super, x, y); // 调用基类的构造函数
    me->super.vptr = &vtbl;           // 重载 vptr
    me->rad = rad;
}

// Circle's 虚函数实现
static uint32_t Circle_area_(Shape const * const me)
{
    Circle const * const me_ = (Circle const *)me; //显示的转换
    return (uint32_t)me_->rad * (uint32_t)me_->rad * PI;
}

static void Circle_draw_(Shape const * const me)
{
    Circle const * const me_ = (Circle const *)me; //显示的转换
    printf("Circle_draw_(x=%d,y=%d,rad=%d)\n",
           Shape_getX(me), Shape_getY(me), me_->rad);
}

