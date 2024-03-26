#include "Parser.hpp"
#include "utils/Error.hpp"
#define L_RED			"\e[0;38;5;9m"
#define L_GREEN			"\e[0;38;5;40m"
#define L_PURPLE_D			"\e[0;38;5;90m"




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

  this->start = 0;
  this->end = 0;
  std::cout << servers << std::endl;
  while (start < servers.size()) 
  {
    // avançar nos espaços fazer vazios
    while (this->start < servers.size() && std::isspace(servers[this->start]))
        this->start++;
    // comparar se o início é servers
    if (servers.compare(0, 6, "server") != 0)
      throw GenericError("Invalid configuration. \
          \nYour .conf file should start with \"server\"");
    // encontrar start '{'
    findStart(servers);
    end = start;
    findEnd(servers);
    // encontrar o '}'
  //  buildVS();
    // buildar o Virtual Server com as refernências das posições start e end
    
    // repetir até passar por todos os servers.
    this->start++;
  }

}

void Parser::findStart(std::string servers)
{
  while(this->start < servers.size())
  {
    if (servers[this->start] == '{')
    {
      this->first_bracet = this->start;
      break;
    }
    this->start++;
  }

  std::cout << L_GREEN << "Value of start is: " << start 
  << "\n Just got out" << std::endl;
}

/*
void Parser::findEnd(std::string servers)
{

}
*/

void Parser::findEnd(std::string servers)
{
  while(this->end < servers.size())
  {
    if (servers[this->end] == '}')
    {
      this->first_bracet = this->end;
      break;
    }
    this->end++;
  }

  std::cout << L_RED << "Value of end is: " << end 
  << "\n Just got out" << std::endl;
}
