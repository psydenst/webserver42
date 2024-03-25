#include "Parser.hpp"

#define L_RED			"\e[0;38;5;9m"

Parser::Parser()
{

}

Parser & Parser::operator=(Parser const &cpy)
{
  this->_Servers = cpy._Servers;
  this->_nbrServers = cpy._nbrServers;
  return (*this);
}

Parser::Parser(Parser const & cpy)
{
  *this = cpy;
}

Parser::~Parser()
{

}

void  Parser::createServer(const std::string & config_path)
{
  std::ifstream ifs;
  std::string   line;
  std::string   servers;
  
  const char * config_c = config_path.c_str(); 
  ifs.open(config_c);
  if(ifs.is_open())
  {
    while(std::getline(ifs, line))
    {
      this->remove_coments(line);
      servers += line;
      // remove coments
      // servers += line;
    }
  }
  ifs.close();
  this->splitServer(servers);
}

void Parser::remove_coments(std::string line)
{
 // std::cout << L_RED << "Line pré: \n" << line << std::endl;
    for (size_t i = 0; i < line.size(); i++)
    {
      if (line[i] == '#')
      {
        line.erase(i, (std::string::npos - i));
      }
    } 
//  std::cout << L_RED << "Line pós: \n" << line << std::endl;
}

void Parser::splitServer(std::string servers)
{
  //
  size_t  start;
  size_t  end;

  start = 0;
  end = 0;
  std::cout << servers << std::endl;
 //  while (start < servers.size()) 
  {
    // avançar nos espaços fazer vazios
    // comparar se o início é servers
    // encontrar start '{'
    // encontrar o '}'
    // buildar com as refernências das posições start e end
    // repetir até passar por todos os servers. 
  }


}
