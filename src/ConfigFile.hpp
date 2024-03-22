#ifndef CONFIG_FILE

#include <iostream>
#include <vector>
#include <map>

typedef std::map<std::string, std::string> nameMap;
typedef std::map<int, std::string> nbrMap;


class ConfigFile 
{
  private:
    int         _port; 
    in_addr_t   _host; // 32bit ipv4 data type for IP addresses. 
    nbrMap      _server_name;
    nameMap     _index;
    nameMap     _locations;
    std::string _root;
  public:
  // Canonical
    ConfigFile( void );
    ConfigFile( const ConfigFile& copy );
    ConfigFile> &operator=( const ConfigFile &src
    ~ConfigFile( void );
  // Setters
    void        setPort();
    void        setHost();
    void        set_serverName(int nbr);
    void        set_index(std::string server_name);
    void        set_location(std::string server_name)
    void        set_root(std::string root);
  

  // Getters
    int         getPort();
    in_addr_t   getHost();
    std::string get_serverName(int nbr);
    std::string get_index(std::string server_name);
    std::string get_location(std::string server_name)
    std::string get_root();
    
};

#endif


/*
  Logic:
  - Popular cada servidor/config_file com as infos, do tipo:
    - hostname
    - porta
    - server name 
    - index
    - root
 */ 
