#ifndef PARSER_HPP
#define PARSER_HPP

#include <iostream>
#include <vector>
#include "ConfigFile.hpp"
#include <fstream>

class Parser
{
  private:
    std::vector<ConfigFile> _Servers;
    int         _nbrServers;
    size_t      first_bracet;
    size_t      last_bracet;
    size_t      start;
    size_t      end;
    void        splitServer(std::string   server);
  public:

// Canonical
    Parser();
    Parser &operator=(Parser const & cpy);
    Parser(Parser const & cpy);
    ~Parser();

// Getters
    int getNbrServers();

// Setters
    int setNbrServers();

// Methods
    void  createServer(const std::string & config_path);
    void  remove_coments(std::string line);
    void  findStart(std::string servers); 
    void findEnd(std::string servers);
/*
    Etapas básicas do Parser:
    - Pegar o caminho do arquivo
    - Abrir o arquivo com open
    - Verificar quantos servidores existem (criar um vetor de servidores)
    - Popular cada servidor/config_file com as infos, do tipo:
      - hostname
      - porta
      - server name 
      - index
      - root
*/ 

};

#endif
