#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Bark" << endl;
    }
};

int main() {
    Animal a;
    Dog d;

    a.sound();
    d.sound();

    return 0;
}
