//TODO acess hidden service archive to receive list of routers
#include <string>

struct Router_list{
  std::string router[]; 

  void update_list();
};