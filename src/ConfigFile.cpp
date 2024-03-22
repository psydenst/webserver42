#include "ConfigFile.hpp"

void  ParserServer::createServer(const std::string & config_path)
{
  std::ifstream ifs;
  std::string   line;
  std::string   servers;

  ifs.open(config_path.c_str())
  {
    if (ifs.is_open())
    {
      while(std::getline(ifs, line))
      {
 //       this->removeComents(line);
  
        servers += line;
      }
      ifs.close();
      splitServer(servers);
      this->_nbrServers = this->_servers.size();
    }
    else 
      throw Error::InvalidPathServer();
  }
}








// Divide uma string com todo o .conif concatendo
// em várias strings.
void ParserServer::splitServer(std::string & servers)
{

    size_t  start;
    size_t  end;

    start = 0;

    while ()
    {
      

    }
}


