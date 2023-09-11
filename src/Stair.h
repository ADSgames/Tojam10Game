#ifndef STAIR_H
#define STAIR_H

#include <asw/asw.h>
#include <vector>

#define IMG_STAIRS 0
#define IMG_TOP_RED 1
#define IMG_TOP_GREEN 2
#define IMG_BRICK 3

class Stair {
 public:
  explicit Stair(float x);
  Stair(const Stair& s);

  // FUNctions
  void update(float distanceRemaining, float speed);
  void draw();

 private:
  float location_y(float last_x);
  static bool last_stair_placed;

  float x, y;
  int type;

  static asw::Texture images[4];
  static int stair_count;
};

#endif  // STAIR_H
