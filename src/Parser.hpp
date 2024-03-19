#ifndef PARSER_HPP
#define PARSER_HPP

#include <iostream>
#include <vector>

class Parser
{
  private:
    std::vector _Servers;
    int         _nbrServers;
  public:
// Canonical
    Parser();
    Parser &operator=(Parser const & cpy);
    Parser(Parser const & cpy);
    ~Parser();

// Methods
    void  openConfig(std::string path);
    void  how_many_servers();
    void  populate_servers();


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
