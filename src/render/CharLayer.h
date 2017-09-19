// Generated by dia2code
#ifndef RENDER__CHARLAYER__H
#define RENDER__CHARLAYER__H


namespace render {
  class Layer;
}

#include "Layer.h"

namespace render {

  /// class CharLayer - 3rd Layer, display the text depending of the state (pv)
  class CharLayer : public render::Layer {
    // Attributes
  protected:
    int XChar;
    // Operations
  public:
    void applyStateChanged ();
    void setXChar (int x);
  };

};

#endif