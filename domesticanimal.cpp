#include "domesticanimal.h"
#include <string>

DomesticAnimal::DomesticAnimal(string name, bool fluffyness)
{
    this->m_name = name;
    this->m_fluffyness = fluffyness;
}

string DomesticAnimal::toJSON(){

}
