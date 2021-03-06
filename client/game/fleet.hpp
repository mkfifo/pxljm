#ifndef FLEET_H
#define FLEET_H
#include <vector>
#include "fvector.hpp"

class Planet;
class Ship;
class Player;

class Fleet {
private:
  FVector attractCentre(Ship* s, float p);
  FVector repellFromShips(Ship* s, int myIndex, float p);
public:
  std::vector<Ship*> ships;

  int startTime; // in millis
  int endTime;
  
  int screenX;
  int screenY;
  int radius;
  
  float rot;
  FVector vel;

  Planet &orig;  // origin
  Planet &dest;  // destination

  Player &owner;

  Fleet(int quantity, Planet &origin, Planet &destination, int launchTime, Player &sender);

  int get_x(int t);
  int get_y(int t);
  

  /*
  returns -1 if gametime is before startTime
  returns  0 if ships are visible
  returns endTime if ships have already arrived
  */
  int update(int viewerX, int viewerY, int gameTime, int frameTime);
};

#endif
