#include <iostream>
using namespace std;
//!========== multilevel inheritance ============
//class animal{
//public:
//    void eat(){
//    cout << "eating"<<endl;
//    }
//};
//class dog:public animal{
//    public:
//    void bark(){
//    cout<< "bark"<<endl;
//    }
//};
//
//class puppy: public dog{
//public :
//    void weep(){
//        cout <<"weep"<<endl;
//    }
//};
//int main()
//{
//    puppy p;
//    p.eat();
//    p.bark();
//    p.weep();
//    return 0;
//}


//!============ multiple inheritance ==========

//class father{
//    public:
//    void working(){
//    cout<<"Father is working"<<endl;
//    }
//};
//class mother{
//    public:
//    void cooking(){
//    cout<<"mother is cooking"<<endl;
//    }
//};
//class child:public father,public mother{
//public:
//    void study(){
//    cout<<"child is studying"<<endl;
//    }
//};
//
//int main(){
//child c;
//c.working();
//c.cooking();
//c.study();
//
//return 0;

//}

//!========== hybrid inheritance ============
//class animal{
//public:
//    void eat(){
//    cout << "eating"<<endl;
//    }
//};
//class dog:public animal{
//    public:
//    void bark(){
//    cout<< "bark"<<endl;
//   }
//};
//class cat : public animal{
//public:
//    void meow(){
//        cout<<"meow"<<endl;
//    }
//
//};
//
//class puppy: public dog , public cat{
//public :
//   void weep(){
//        cout <<"weep"<<endl;
//   }
//};
//int main()
//{
//    puppy p;
//    p.bark();
//    p.meow();
//    p.weep();
//    return 0;
//}

//!=========== destructor ===========
class mark{
public:
    mark(){
        cout<< "inside constructor"<<endl;
    }
    ~mark(){
        cout << "inside destructor"<<endl;
    }
};

int main(){
    mark ml;
    return 0;
}










