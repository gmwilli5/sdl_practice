#include "physics.h"
physics_class::physics_class()
{
    gravity=1;
}
void physics_class::apply_gravity(vec2* apply_too)
{
    apply_too->x+=gravity;
}
void physics_class::apply_gravity(int* apply_too)
{
    apply_too+=gravity;
}
