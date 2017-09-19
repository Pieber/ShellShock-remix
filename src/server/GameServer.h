// Generated by dia2code
#ifndef SERVER__GAMESERVER__H
#define SERVER__GAMESERVER__H

#include <vector>
#include "engine/CommandSet.h"
#include "engine/Engine.h"
#include "state/State.h"
#include "ai/AI.h"
#include "json/json.h"
#include "json/json.h"

namespace server {
  class UserDB;
  class AbstractService;
}

#include "HttpStatus.h"
#include "AbstractService.h"
#include "UserDB.h"

namespace server {

  /// class GameServer - 
  class GameServer : public server::AbstractService {
    // Associations
    // Attributes
  protected:
    UserDB& userDB;
    std::vector<engine::CommandSet*> commandSaved;
    engine::Engine* engine;
    state::State* state;
    std::vector<ai::AI*>  ai;
    // Operations
  public:
    GameServer (UserDB& userDB);
    HttpStatus get (Json::Value& out, int characterSender, int characterAsked) const;
    HttpStatus post (const Json::Value& in, int characterSender);
  };

};

#endif