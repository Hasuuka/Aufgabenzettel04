#include "tortoise.h"
#include <iostream>

using namespace std;

Tortoise::Tortoise(string name, bool fluffyness, int shellThickness, DomesticAnimal* m_friend) : DomesticAnimal(name, fluffyness)
{
    this->m_shellThickness= shellThickness;
    this->m_friend = m_friend;
}

int counter=0;

void Tortoise::toJSON(){
    counter++;
    cout << "name: " << this->m_name << endl << "fluffyness: " << this->m_fluffyness << endl
         << "shell thickness: " << this->m_shellThickness << endl;
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

void Tortoise::setFriend(DomesticAnimal *newFriend)
{
    this->m_friend = newFriend;
}
