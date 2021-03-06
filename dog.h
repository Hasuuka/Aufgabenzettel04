#ifndef DOG_H
#define DOG_H
#include "domesticanimal.h"
#include <string>


class Dog : public DomesticAnimal
{
public:
    Dog(string name, bool fluffyness, double senseOfSmell, DomesticAnimal* m_friend);

    ~Dog(){

    }

    virtual string toJSON();

protected:
    double m_senseOfSmell;
    DomesticAnimal* m_friend;

};

#endif // DOG_H
