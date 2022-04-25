#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>

using namespace std;

class animal{
private:
    bool isAlive;
protected:
    virtual void action() = 0;
public:
    void setAlive(){
        isAlive = true;
    }
};

#endif