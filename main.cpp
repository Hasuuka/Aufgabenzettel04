#include <iostream>
#include <dog.h>
#include <domesticanimal.h>
#include <tortoise.h>
#include <cat.h>

using namespace std;

int main()
{
    Cat *p_cat = new Cat("Pointer Cat", true, 4, NULL);
    Tortoise *p_tortoise = new Tortoise("Pointer Tortoise", false, 4, p_cat);
    Dog *p_dog = new Dog("Pointer Dog", true, 2, p_tortoise);

    p_tortoise->setFriend(p_dog);

    cout << p_dog->toJSON()<< endl;
    //p_cat->toJSON();
    //p_tortoise->toJSON();

    delete p_dog;
    delete p_tortoise;
    delete p_cat;

    return 0;
}
