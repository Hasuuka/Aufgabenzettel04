#include "dog.h"
#include <iostream>

using namespace std;
Dog::Dog(string name, bool fluffyness, double senseOfSmell, DomesticAnimal* m_friend) : DomesticAnimal(name, fluffyness)
{
    this->m_senseOfSmell = senseOfSmell;
    this->m_friend = m_friend;
}

int counter1 = 0;

void Dog::toJSON(){
    counter1++;
    cout << "name: " << this->m_name << endl << "fluffyness: " << this->m_fluffyness << endl
         << "sense of smell: " << this->m_senseOfSmell << endl;
    if(this->m_friend == NULL){
        cout << "friend: NULL" << endl;
        return;
    }
    else
    {
        if(counter1 <2)
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
