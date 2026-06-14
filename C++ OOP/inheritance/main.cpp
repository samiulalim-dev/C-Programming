#include <iostream>

using namespace std;

class animal{
public:
    void eat(){
    cout << "eatin"<<endl;
    }
};
class dog:public animal{
    public:
    void bark(){
    cout<< "bark"<<endl;
    }
};

int main()
{
    dog d;
    d.eat();
    d.bark();
    return 0;
}
