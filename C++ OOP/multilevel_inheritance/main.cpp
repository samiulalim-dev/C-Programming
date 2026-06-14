#include <iostream>
using namespace std;
//!========== multileve inheritance ============
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

class puppy: public dog{
public :
    void weep(){
        cout <<"meow"<<endl;
    }
};
int main()
{
    puppy p;
    p.eat();
    p.bark();
    p.weep();
    return 0;
}
