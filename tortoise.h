#ifndef TORTOISE_H
#define TORTOISE_H
#include "domesticanimal.h"
#include <string>


class Tortoise : public DomesticAnimal
{
public:
    Tortoise(string name, bool fluffyness, int shellThickness, DomesticAnimal* m_friend);

    ~Tortoise(){

    }

    virtual string toJSON();

    void setFriend(DomesticAnimal *newFriend);

protected:
    int m_shellThickness;
    DomesticAnimal* m_friend;

};

#endif // TORTOISE_H
