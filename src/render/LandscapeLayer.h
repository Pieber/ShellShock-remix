// Generated by dia2code
#ifndef RENDER__LANDSCAPELAYER__H
#define RENDER__LANDSCAPELAYER__H


namespace render {
  class Layer;
}

#include "Layer.h"

namespace render {

  /// class LandscapeLayer - Background Layer, doesn't reacts with any StateEvent
  class LandscapeLayer : public render::Layer {
    // Operations
  public:
    void applyStateChanged ();
  };

};

#endif