#ifndef TOOLS_H_INCLUDED
#define TOOLS_H_INCLUDED
vec2 operator+(vec2 a,vec2 b);
vec2 operator+=(vec2& a,vec2 b);
vec2 dot_product(vec2 a,vec2 b);
aabb construct_aabb(vec2 vec,int width,int height);
aabb construct_aabb(vec3 vec,int width,int height);
bool vec2_vs_vec3(vec2 a,vec3 b);
bool aabb_vs_aabb(aabb vec_a, aabb vec_b);
bool vec2_vs_vec2(vec2 vec_a,vec2 vec_b);
bool detect_collision(aabb a, aabb b);
bool detect_collision(vec2 a,vec3 b);
bool detect_collision(vec2 a,vec2 b);
void zero_vec2(vec2& a);
void zero_vec2_y(vec2& a);
#endif // TOOLS_H_INCLUDED
