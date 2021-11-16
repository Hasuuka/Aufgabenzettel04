#ifndef DOMESTICANIMAL_H
#define DOMESTICANIMAL_H
#include <string>
using namespace std;

class DomesticAnimal
{
public:
    DomesticAnimal(string name, bool fluffyness);
    virtual ~DomesticAnimal(){

    }

    virtual void toJSON();
protected:
    string m_name;
    bool m_fluffyness;
};

#endif // DOMESTICANIMAL_H
