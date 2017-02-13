#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>
#include <allegro5\allegro_audio.h>
#include <allegro5\allegro_acodec.h>
int main() {
	al_init();
	al_init_primitives_addon();
	al_init_ttf_addon();
	al_install_audio();
	al_init_font_addon();
	al_init_acodec_addon();
	al_reserve_samples(1);

	ALLEGRO_DISPLAY*display = NULL;
	ALLEGRO_SAMPLE*sample = NULL;
	ALLEGRO_FONT*font = al_create_builtin_font();
	al_create_display(840, 680);
	al_clear_to_color(al_map_rgb(255, 210, 210));
	al_draw_filled_triangle(90, 250, 750, 250, 420, 600, ALLEGRO_COLOR(al_map_rgb(255, 120, 120)));
	al_draw_filled_circle(260, 230, 170, ALLEGRO_COLOR(al_map_rgb(255, 120, 120)));
	al_draw_filled_circle(580, 230, 170, ALLEGRO_COLOR(al_map_rgb(255, 120, 120)));
	al_draw_text(font, ALLEGRO_COLOR(al_map_rgb(0, 0, 0)), 420, 250, 1, "Happy Valentine's Day!");
	al_draw_text(font, ALLEGRO_COLOR(al_map_rgb(0, 0, 0)), 420, 270, 1, "You have the key to my heart!");
	sample = al_load_sample("Light.wav");
	al_play_sample(sample, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_LOOP, NULL);






	al_flip_display();
	al_rest(100.0);
	al_destroy_display(display);
	al_destroy_sample;
}