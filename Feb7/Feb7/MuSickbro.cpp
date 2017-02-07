#include <allegro5/allegro.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>

int main() {
	al_init();
	al_install_audio();
	al_init_acodec_addon();
	al_reserve_samples(1);
	ALLEGRO_DISPLAY*display = NULL;
	ALLEGRO_SAMPLE*sample = NULL;
	sample = al_load_sample("FFVII.wav");
	display = al_create_display(640, 480);
	al_play_sample(sample, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_LOOP, NULL);
	al_rest(15.0);
	al_destroy_display(display);
	al_destroy_sample(sample);
}