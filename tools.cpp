#include "structs.h"
#include "player.h"
#include <iostream>
class player_class;
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
aabb construct_aabb(vec2 vec,int width,int height)
{
    aabb temp;
    temp.top.x=vec.x;
    temp.top.y=vec.y;
    temp.bottom.x=(vec.x+width);
    temp.bottom.y=(vec.y+height);
    return temp;
}
aabb construct_aabb(vec3 vec,int width,int height)
{
    aabb temp;
    temp.top.x=vec.x;
    temp.top.y=vec.y;
    temp.bottom.x=(vec.x+width);
    temp.bottom.y=(vec.y+height);
    return temp;
}
bool aabb_vs_aabb(aabb a, aabb b)
{
    if(a.top.x<=b.bottom.x&&a.top.x>b.top.x&&a.top.y>=b.top.y&&a.top.y<=b.bottom.y){
        //if(a.)
        return true;
    }
    if(a.bottom.x<=b.bottom.x&&a.bottom.x>b.top.x&&a.bottom.y>=b.top.y&&a.bottom.y<=b.bottom.y){
        //if(a.)
        return true;
    }
    if(b.top.x<=a.bottom.x&&b.top.x>a.top.x&&b.top.y>=a.top.y&&b.top.y<=a.bottom.y){
        //if(a.)
        return true;
    }
    if(b.bottom.x<=a.bottom.x&&b.bottom.x>a.top.x&&b.bottom.y>=a.top.y&&b.bottom.y<=a.bottom.y){
        //if(a.)
        return true;
    }
    return false;
}
bool vec2_vs_vec3(vec2 vec_a,vec3 vec_b)
{
    aabb a=construct_aabb(vec_a,30,20);
    aabb b=construct_aabb(vec_b,30,20);
    if(aabb_vs_aabb(a,b)==true){
        return true;
    }
    return false;
}
bool vec2_vs_vec2(vec2 vec_a,vec2 vec_b)
{
    aabb a=construct_aabb(vec_a,30,20);
    aabb b=construct_aabb(vec_b,30,20);
    if(aabb_vs_aabb(a,b)==true){
        return true;
    }
    return false;
}
bool detect_collision(aabb a, aabb b)
{
    return aabb_vs_aabb(a,b);
}
bool detect_collision(vec2 a,vec3 b)
{
    return vec2_vs_vec3(a,b);
}
bool detect_collision(vec2 a,vec2 b)
{
    return vec2_vs_vec2(a,b);
}
void zero_vec2(vec2& a)
{
    a.x=0;
    a.y=0;
}
void zero_vec2_y(vec2& a)
{
    a.y=0;
}
aabb_3 construct_aabb_3(player_class* player)
{
    aabb_3 temp;
    temp.top=player->get_position();
    vec2 temp_v={0,0};
    temp_v.x=temp.top.x+30;
    temp_v.y=temp.top.y+20;
    temp.bottom=temp_v;
    temp.movement=player->get_velocity();
    return temp;
}
bool vertical_collision_check(aabb_3 a, aabb b)
{
    //return false;
    if(a.movement.x==0){
        std::cout<<117<<"\n";
        return true;
    }
    if(a.movement.y==0){
        std::cout<<119<<"\n";
        return false;
    }
    if(a.top.y>=b.top.y-20&&a.top.y<=b.top.y+20){
        std::cout<<123<<"\n";
        return false;
    }
    std::cout<<128<<"\n";
    return true;
}
bool operator>=(vec2 a,int b)
{
    if(a.x>=b&&a.y>=b){
        return true;
    }
    return false;
}
bool operator<=(vec2 a,int b)
{
    if(a.x<=b&&a.y<=b){
        return true;
    }
    return false;
}
