#ifndef ERROR_HPP
#define ERROR_HPP

#include <exception>
#include <iostream>
#include <string>

using namespace std;

class GenericError
{
    private: 
        string message; 
      
    public: 
        // Constructor accepts a const char* that is used to set 
        // the exception message 
        GenericError(const char* msg);
      
        // Override the what() method to return our message 
        const char* what() const throw();
}; 

#endif
