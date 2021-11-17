#include "cat.h"
#include <iostream>
#include <sstream>

using namespace std;

Cat::Cat(string name, bool fluffyness, double meouwPower, DomesticAnimal* m_friend) :DomesticAnimal(name, fluffyness)
{
    this->m_meouwPower = meouwPower;
    this->m_friend = m_friend;
}

int counter = 0;

string Cat::toJSON(){
    stringstream ss;
    string output = "";

   if(counter <1)
   {
       ss << "name: " << this->m_name << endl << "fluffyness: " << this->m_fluffyness << endl
            << "meouwpower: " << this->m_meouwPower << endl;
       if(this->m_friend == NULL){
           ss << "friend: NULL" << endl;
           output = ss.str();
           return output;
       }
       else{
           counter++;
           ss << "friend: ";
           ss << m_friend->toJSON();
       }
   }
   else{
       ss << "friend already serialised" << endl;
       output = ss.str();
       return output;
   }
   output = ss.str();
   return output;
}
