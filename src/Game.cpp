#include "Game.h"

volatile int Game::timer1 = 00;

Game::Game()
{
  // Init fmod
  FSOUND_Init (44100, 32, 0);

  // Creates a random number generator (based on time)
  srand (time(NULL));

  // Other Sprites
  buffer = create_bitmap( SCREEN_W, SCREEN_H);

  // Temporary fonts
  /*FONT *f1, *f2, *f3, *f4, *f5;

  //Sets Font
  if(!(f1 = load_font(("fonts/cooper_black.pcx"), NULL, NULL))){
    abort_on_error( "Cannot find font fonts/arial_black.png \n Please check your files and try again");
  }

  f2 = extract_font_range(f1, ' ', 'A'-1);
  f3 = extract_font_range(f1, 'A', 'Z');
  f4 = extract_font_range(f1, 'Z'+1, 'z');

  //Merge fonts
  cooper = merge_fonts(f4, f5 = merge_fonts(f2, f3));

  //Destroy temporary fonts
  destroy_font(f1);
  destroy_font(f2);
  destroy_font(f3);
  destroy_font(f4);
  destroy_font(f5);*/

  // Init
  init();
}

void Game::gameTicker(){
  timer1++;
}
END_OF_FUNCTION(gameTicker)

void Game::init(){

}

void Game::update(){

}

void Game::draw(){

}

Game::~Game()
{
  // Destroy images
  destroy_bitmap( buffer);

  // Fade out
  highcolor_fade_out(16);

  // Clean up fmod
  FSOUND_Close();
}
