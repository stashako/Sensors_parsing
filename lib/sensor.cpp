#include "sensor.h"

sensor::sensor(string str){

    stringstream ss(str);
    ss >> _name;
    ss >> _num;
    ss >> _addr;    
}

string sensor::name(){

    return _name;

};

int sensor::address(){

    return _addr;
    
};

int sensor::number(){

    return _num;
    
};
