#include <iostream>

using namespace std;

//!=========== single inheritance ==========

class animal{
public:
    void eat(){
    cout << "eating"<<endl;
    }
};
class dog:public animal{
    public:
    void bark(){
    cout<< "bark"<<endl;
    }
};
//!========== hierarchical inheritance ============
class cat: public animal{
public :
    void meow(){
        cout <<"meow"<<endl;
    }
};

int main()
{
    dog d;
    cat c;
    d.eat();
    d.bark();
    c.eat();
    c.meow();
    return 0;
}
