// Generated by dia2code
#ifndef STATE__STATE__H
#define STATE__STATE__H

#include "state/StateEvent.h"

namespace state {
  class ElementList;
  class ElementGrid;
  class Element;
  class StateEvent;
  class State;
  class Observable;
}

#include "ElementList.h"
#include "ElementGrid.h"
#include "Observable.h"

namespace state {

  /// class State - Store the list of the elements of the background (grid) and the list of the tank(mobiles)
  class State : public state::Observable {
    // Associations
    // Attributes
  protected:
    ElementList mobiles;
    ElementGrid grid;
    // Operations
  public:
    State ();
    ~State ();
    ElementGrid& getGrid ();
    const ElementGrid& getGrid () const;
    ElementList& getMobiles ();
    const ElementList& getMobiles () const;
    Element* getMobile (int idx);
    const Element* getMobile (int idx) const;
    void load (const char* file_name);
    void notifyObserver (const StateEvent& event) const;
    void copy (const State s);
  };

};

#endif