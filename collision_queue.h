#ifndef COLLISION_QUEUE_H_INCLUDED
#define COLLISION_QUEUE_H_INCLUDED
#include <vector>
#include "collision.h"
class collision_queue_class{
    private:
        std::vector<collision_class> collisions;
    public:
        void push(collision_class new_collision);
        collision_class pop();
        unsigned int size();
};
#endif // COLLISION_QUEUE_H_INCLUDED
