#include "collision_queue.h"
void collision_queue_class::push(collision_class new_collision)
{
    collisions.push_back(new_collision);
}
collision_class collision_queue_class::pop()
{
    //return collisions[0];
    collision_class temp=collisions[0];
    collisions.erase(collisions.begin());
    return temp;
}
unsigned int collision_queue_class::size()
{
    return collisions.size();
}
