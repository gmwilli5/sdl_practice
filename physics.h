#ifndef PHYSICS_H_INCLUDED
#define PHYSICS_H_INCLUDED
#include "structs.h"
class physics_class{
    private:
        int gravity;
    public:
        physics_class();
        void apply_gravity(vec2* apply_too);
        void apply_gravity(int* apply_too);
};
#endif // PHYSICS_H_INCLUDED
