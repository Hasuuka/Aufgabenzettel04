#include "dog.h"
#include <iostream>
#include <sstream>

using namespace std;
Dog::Dog(string name, bool fluffyness, double senseOfSmell, DomesticAnimal* m_friend) : DomesticAnimal(name, fluffyness)
{
    this->m_senseOfSmell = senseOfSmell;
    this->m_friend = m_friend;
}

int counter1 = 0;

string Dog::toJSON(){

    stringstream ss;
    string output = "";

    if(counter1<1)
    {
        ss << "name: " << this->m_name << endl << "fluffyness: " << this->m_fluffyness << endl
             << "sense of smell: " << this->m_senseOfSmell << endl;
        if(this->m_friend == NULL)
        {
            ss << "friend: NULL" << endl;
            output = ss.str();
            return output;
        }
        else
        {
            counter1++;
            ss << "friend: ";
            ss << m_friend->toJSON();
        }
    }
    else
    {
        ss << "friend already serialised" << endl;
        output = ss.str();
        return output;
    }
    output = ss.str();
    return output;
}
