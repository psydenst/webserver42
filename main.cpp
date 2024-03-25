#include "src/Parser.hpp"
#include "src/utils/Error.hpp"
#include "src/ConfigFile.hpp"

#define L_RED			"\e[0;38;5;9m"
#define DB       "./src/config/default.conf"


static void signalHandler(int signal)
{
  if (signal != SIGINT)
    return;
  else 
  {
    // add a clean exit posteriorly. 
    exit(0);
  }
}
 
int main(int argc, char *argv[])
{
  Parser configServer;
  signal(SIGINT, signalHandler);

  try 
  {
    if (argc > 2)
      throw (GenericError("Excessive args.\nUsage: ./webserver path_to_config_file.config"));
    else if (argc == 2)
    {
        configServer.createServer(argv[1]);
    }
    else 
    {
        configServer.createServer(DB);
    }

  }
  catch (const GenericError& e)
  {
    std::cout << L_RED << e.what() << std::endl;
  }

  return (0);
}


// MUST CHANGE createServer TO A PRIVATEMEMBER
// MEMBER AGAIN

/*
int main(int argc, char *argv[])
{
  Parser dot_config;
  if (argc == 2)
    dot_config.createServer(argv[1]);
}
*/
