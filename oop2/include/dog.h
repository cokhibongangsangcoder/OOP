#ifndef DOG_H
#define DOG_H

#include<iostream>
#include"animal.h"

using namespace std;

class dog : public animal{
private:
    int weight;
    string type;
public:
    void action();
};

#endif