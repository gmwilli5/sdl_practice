#include "events.h"
#include "window.h"
#include "game.h"
int main()
{
    game_class g;
    while(g.get_running()){
        g.get_events()->event_loop();
        g.render();
        g.update();
    }
}
