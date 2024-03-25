#include "ConfigFile.hpp"

  ConfigFile::ConfigFile()
  {

  }

  ConfigFile::ConfigFile(ConfigFile const & obj)
  {
      *this = obj;
  }

  ConfigFile & ConfigFile::operator=(ConfigFile const & obj)
  {
      this->_port = obj._port;
      this->_host = obj._host;
      this->_server_name = obj._server_name;
      this->_index = obj._index;
      this->_locations = obj._locations;
      this->_root = obj._root;

      return (*this);
  }

ConfigFile::~ConfigFile()
{

}


/*
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
*/


