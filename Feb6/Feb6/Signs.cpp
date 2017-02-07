#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <allegro5/allegro_font.h>

int main() {
	al_init();
	al_init_primitives_addon();
	al_init_font_addon();
	ALLEGRO_FONT* font = al_create_builtin_font();
	ALLEGRO_DISPLAY*display = NULL;
	display = al_create_display(600, 400);
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_filled_triangle(150, 50, 450, 50, 300, 250, ALLEGRO_COLOR(al_map_rgb(255, 255, 255)));
	al_draw_triangle(175, 61, 425, 61, 300, 225, ALLEGRO_COLOR(al_map_rgb(255, 20, 20)),20);
	al_draw_text(font, al_map_rgb(255, 20, 20), 300, 80, ALLEGRO_ALIGN_CENTER, "YEILD");
	al_flip_display();
	al_rest(100.0);
	al_destroy_display;
}