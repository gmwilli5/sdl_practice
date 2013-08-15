#include "structs.h"
vec2 operator+(vec2 a,vec2 b)
{
    vec2 temp;
    temp.x=a.x+b.x;
    temp.y=a.y+b.y;
    return temp;
}
vec2 operator+=(vec2& a,vec2 b)
{
    a.x=a.x+b.x;
    a.y=a.y+b.y;
    return a;
}
vec2 dot_product(vec2 a,vec2 b)
{
    vec2 temp;
    temp.x=a.x+b.x;
    temp.y=a.y+b.y;
    return temp;
}
