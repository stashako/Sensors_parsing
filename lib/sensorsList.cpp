#include "sensorsList.h"

sensorsList::sensorsList(string path){
    
   ifstream fin(path);
   string line;

   while(fin){

       getline(fin, line);
       sensor s(line);
       list.push_back(s);

   }

}

vector<sensor> sensorsList::getList(){
    return list;
}