#include<iostream>
#include "sensor.h"
#include "sensorsList.h"

void printList(vector<sensor> l){

    for(auto i : l){
        cout << "name: " << i.name() << "\n";
        cout << "number: " << i.number() << "\n";
        cout << "address: " << i.address() << "\n";
        cout << "\n";
    }

}

int main(){

    string path = "/home/stashako/cpp_test/cpp_parsing/lib/data.txt";

    sensorsList list(path);

    printList(list.getList());

    return 0;
}