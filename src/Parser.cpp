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
  try 
  {
    if (openConfig(path) == 1)
      throw GenericError("Error opening .conf");
    if ()
  }
  catch (const std::exception&)
  {
    std::cout << e.what() << std::endl; 
  } 
}

int Parser::openConfig(std::string path)
{
  std::ifstream if;

  if (if.open(path) )
}

