#include "cat.h"
#include <iostream>

using namespace std;

Cat::Cat(string name, bool fluffyness, double meouwPower, DomesticAnimal* m_friend) :DomesticAnimal(name, fluffyness)
{
    this->m_meouwPower = meouwPower;
    this->m_friend = m_friend;
}

int counter = 0;

void Cat::toJSON(){
    counter++;

    cout << "name: " << this->m_name << endl << "fluffyness: " << this->m_fluffyness << endl
         << "meouwpower: " << this->m_meouwPower << endl;
    if(this->m_friend == NULL){
        cout << "friend: NULL" << endl;
        return;
    }
    else
    {
        if(counter <2)
        {
            cout << "friend: ";
            m_friend->toJSON();
        }
        else
        {
            cout << "friend already serialised" << endl;
            return;
        }
    }
}
