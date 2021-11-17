#include "tortoise.h"
#include <iostream>
#include <sstream>

using namespace std;

Tortoise::Tortoise(string name, bool fluffyness, int shellThickness, DomesticAnimal* m_friend) : DomesticAnimal(name, fluffyness)
{
    this->m_shellThickness= shellThickness;
    this->m_friend = m_friend;
}

int counter2=0;

string Tortoise::toJSON(){
    string output="";
    stringstream ss;

    if(counter2<1){
        ss << "name: " << this->m_name << endl << "fluffyness: " << this->m_fluffyness << endl
             << "shell thickness: " << this->m_shellThickness << endl;
        if(this->m_friend == NULL){
            ss << "friend: NULL" << endl;
            output = ss.str();
            return output;
        }
        else
        {
            counter2++;
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





void Tortoise::setFriend(DomesticAnimal *newFriend)
{
    this->m_friend = newFriend;
}
