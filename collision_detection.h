#ifndef COLLISION_DETECTION_H_INCLUDED
#define COLLISION_DETECTION_H_INCLUDED
class player_class;
class map_class;
class collision_detection_class{
    private:
        player_class* player;
        map_class* map;
    public:
        collision_detection_class();
        void set_map(map_class* new_map);
        void set_player(player_class* player);
};
#endif // COLLISION_DETECTION_H_INCLUDED
