#pragma once

#ifndef _SENSOR_H_
#define _SENSOR_H_

#include <string>
#include <sstream>

using namespace std;

class sensor{
   string _name;
   int _num;
   int _addr;

   public:
   sensor(string str);

   string name();
   int number();
   int address();

};




#endif
