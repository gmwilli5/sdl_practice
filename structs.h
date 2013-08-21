#ifndef STRUCTS_H_INCLUDED
#define STRUCTS_H_INCLUDED
struct vec2{
    int x;
    int y;
};
struct vec3{
    int x;
    int y;
    int z;
};
struct aabb{
    vec2 top;
    vec2 bottom;
};
struct aabb_3{
    vec2 top;
    vec2 bottom;
    vec2 movement;
};
#endif // STRUCTS_H_INCLUDED
