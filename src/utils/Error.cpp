#include "Error.hpp"

GenericError::GenericError(const char* msg) : message(msg) 
{
  
}

const char* GenericError::what() const throw() 
{ 
    return message.c_str(); 
} 

 
