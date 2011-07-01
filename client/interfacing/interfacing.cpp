#include <SFML/Graphics.hpp>
#include <interfacing.hpp>

Interfacing::Interfacing(Client &cl)
  : window(sf::VideoMode(1024, 600), "awesome title of doom", sf::Style::Close), client(cl) {
}

void Interfacing::draw(const std::vector<Planet> &planets, const std::vector<Mothership> &motherships, const std::vector<Fleet> &fleets){
  for( int i=0; i< ships.size(); ++i){
    sf::Shape ship;
    // TODO adjust colour based on player
    sf::Color c = sf::Color::Red;
    ship.AddPoint(ships[i].screenX+1, ships[i].screenY,   c, c);
    ship.AddPoint(ships[i].screenX-1, ships[i].screenY-1, c, c);
    ship.AddPoint(ships[i].screenX-1, ships[i].screenY+1, c, c);
    ship.EnableFill(false);
    ship.Rotate();//TODO
  }
}

void Interfacing::draw_string(const std::string &val, int x, int y){
  
}

void Interfacing::main(){
  const sf::Input &input = window.GetInput();
  sf::Event event;
  int mx, my;

  // go go go !
  while(window.IsOpened()){
    // check for closing events
    while(window.PollEvent(event))
      if(Event.Type == sf::Event::Closed)
        window.Close();
      else if((Event.Type == sf::Event::KeyPressed) && (event.Key.Code == sf::Key::Escape))
        window.close();
    // if we are here, we are alive!
    mx = input.GetMouseX();
    my = input.GetMouseY();
    // do awesome things
  }
}
