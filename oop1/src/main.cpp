#include"human.h"

int main(int argc, char *argv[]){
   human khabanh("Kha Banh", 25);
   //Wrong access
   //khabanh.mName = "NgoBaKha";
   khabanh.display();
   //Right access because isPrison is public
   khabanh.isPrison = true;
   khabanh.display();
   return 0;
}