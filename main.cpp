#include "src/Parser.hpp"
#include "src/utils/Error.hpp"

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
      throw (GenericError("too much args. Usage: ./webserver path_to_config_file.config"));
    else if (argc == 2)
    {
        configServer.openConfig(argv[1]);
    }
    else
    {
        configServer.openConfig(NULL);
    }
  }
  catch (const GenericError& e)
  {
    std::cout << e.what() << std::endl;
  }

  return (0);
}
