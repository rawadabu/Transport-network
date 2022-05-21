//
//  Exceptions.hpp
//  EX2
//
//  Created by Rawad Abusaleh on 16/05/2022.
//

#ifndef Exceptions_hpp
#define Exceptions_hpp

#include <stdio.h>
#include <exception>
using namespace std;

struct fileException : public exception {
    const char * what () const throw () {
          return "Cannot locate the given file.";
       }
};

struct wrongFormat : public exception {
    const char * what () const throw () {
          return "Wrong format.";
       }
};

struct wrongInputs : public exception {
    const char * what () const throw () {
          return "Wrong inputs has been given.";
       }
};


#endif /* Exceptions_hpp */
