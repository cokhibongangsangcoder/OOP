#include <iostream>
#include "human.h"
using namespace std;

human::human(string name, int age){
	mName = name;
	mAge = age;
	isPrison = false;
}

void human::display(){
	cout << "A human with name " << mName << endl;
	cout << mName << " with age " << mAge << endl;
	if(isPrison){ 
		cout << "da co tien an, tien su" << endl;
	} else {
		cout << "chua di tu`" << endl;
	}
}
