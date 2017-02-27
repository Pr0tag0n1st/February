#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
int main() {
	float coords[6][6]{ {100,300},{200,300},{300,400},{500,200},{400,100},{100,300} };
	al_init();
	al_init_primitives_addon();
	ALLEGRO_DISPLAY*display = NULL;
	al_create_display(640, 480);
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_ribbon(*coords,sizeof(*coords), ALLEGRO_COLOR(al_map_rgb(255,255,255)),12,6);
	al_flip_display();
	al_rest(10);
	al_destroy_display(display);
}