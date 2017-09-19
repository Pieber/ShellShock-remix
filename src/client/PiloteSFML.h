// Generated by dia2code
#ifndef CLIENT__PILOTESFML__H
#define CLIENT__PILOTESFML__H

#include "render/Scene.h"
#include <vector>
#include "render/SurfaceSFML.hpp"
#include "engine/Engine.h"
#include "state/State.h"

namespace client {
  class CacheStateObserver;
  class Button;
  class Pilote;
  class PiloteRendu;
}

#include "Button.h"
#include "PiloteRendu.h"
#include "CacheStateObserver.h"

namespace client {

  /// class PiloteSFML - 
  class PiloteSFML : public client::PiloteRendu {
    // Associations
    // Attributes
  protected:
    render::Scene scene;
    std::vector<CacheStateObserver*>  obs;
    std::vector<SurfaceSFML*> surfaces;
    engine::Engine* engine;
    std::vector<Button> button;
    int character;
    sf::RenderWindow window;
    Pilote* pilote;
    // Operations
  public:
    PiloteSFML (state::State* state, engine::Engine* e, int character, Pilote* pilote);
    ~PiloteSFML ();
    void display ();
    void applyChange ();
    void createMenu ();
    void eventUp ();
  };

};

#endif