#include <iostream>
#include "physics.h"
physics_class::physics_class()
{
    gravity=1;
}
void physics_class::apply_gravity(vec2* apply_too)
{
    //std::cout<<apply_too->y<<"\n";
    apply_too->y+=gravity;
    //std::cout<<apply_too->y<<"\n";
}
void physics_class::apply_gravity(int* apply_too)
{
    //std::cout<<*apply_too<<"\n";
    *apply_too+=gravity;
    //std::cout<<*apply_too<<"\n";
}
