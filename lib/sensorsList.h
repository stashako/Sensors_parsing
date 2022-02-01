#pragma once

#ifndef _SENSORSLIST_H_
#define _SENSORSLIST_H_

#include "sensor.h"
#include<fstream>
#include<vector>

class sensorsList{

    vector<sensor> list;

   public:
   sensorsList(string path);
   vector<sensor> getList();

};


#endif
