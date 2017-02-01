#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>

int main() {
	al_init();
	al_init_primitives_addon();
	ALLEGRO_DISPLAY*display = NULL;
	display = al_create_display(640, 480);
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_flip_display();
	al_draw_triangle(10, 10, 40, 10, 10, 40, ALLEGRO_COLOR(al_map_rgb(10, 10, 200)), 5);
	al_draw_triangle(200, 400, 400, 400, 600, 200, ALLEGRO_COLOR(al_map_rgb(10, 200, 10)), 5);
	al_draw_triangle(90, 50, 50, 90, 90, 200, ALLEGRO_COLOR(al_map_rgb(200, 10, 10)), 5);
	al_flip_display();
	al_rest(10.0); 
}