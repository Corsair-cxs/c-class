/*************************************************************************
	> File Name: main.c
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Wed 04 Nov 2020 07:07:31 PM CST
 ************************************************************************/

#include <shape.h>  /* Shape class interface */
#include <stdio.h>  /* for printf() */
int main() {
    Shape s1, s2; /* multiple instances of Shape */
    Shape_ctor(&s1, 0, 1);
    Shape_ctor(&s2, -1, 2);
    printf("Shape s1(x=%d,y=%d)\n", Shape_getX(&s1), Shape_getY(&s1));
    printf("Shape s2(x=%d,y=%d)\n", Shape_getX(&s2), Shape_getY(&s2));
    Shape_moveBy(&s1, 2, -4);    
    Shape_moveBy(&s2, 1, -2);
    printf("Shape s1(x=%d,y=%d)\n", Shape_getX(&s1), Shape_getY(&s1)); 
    printf("Shape s2(x=%d,y=%d)\n", Shape_getX(&s2), Shape_getY(&s2));
    return 0;
}
