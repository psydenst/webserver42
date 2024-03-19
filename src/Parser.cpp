#include "Parser.hpp"

Parser::Parser()
{


}

Parser & Parser::operator=(Parser const &cpy);
{
  *this = cpy;
  return (*this);

}

Parser::Parser(Parser const & cpy)
{
  this._Servers = cpy._Servers;
  this._nbrServers = cpy._nbrServers;
}

Parser::~Parser()
{
  
}

void Parser::config_main(std::string path)
{
  

}


void Parser::openConfig(std::path)
{
  if ()
}


