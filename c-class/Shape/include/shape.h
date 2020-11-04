/*************************************************************************
	> File Name: Shape.h
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Wed 04 Nov 2020 07:04:32 PM CST
 ************************************************************************/

#ifndef SHAPE_H
#define SHAPE_H
#include <stdint.h>

// Shape 的属性
typedef struct {    int16_t x;     int16_t y; } Shape;

//Shape 的操作函数，接口函数
void Shape_ctor(Shape * const me, int16_t x, int16_t y);
void Shape_moveBy(Shape * const me, int16_t dx, int16_t dy);
int16_t Shape_getX(Shape const * const me);
int16_t Shape_getY(Shape const * const me);
#endif /* SHAPE_H */
