#ifndef CAT_H
#define CAT_H
#include "domesticanimal.h"
#include <string>
using namespace std;


class Cat : public DomesticAnimal
{
public:
    Cat(string name, bool fluffyness, double meouwPower, DomesticAnimal* m_friend);

    virtual ~Cat(){


    }
    virtual void toJSON();

protected:
    double m_meouwPower;
    DomesticAnimal* m_friend;

};

#endif // CAT_H
