#include <iostream>

using namespace std;

class students{
    public:
        string name;
    protected:
        int age;
    private:
        int roll;

    public:
    void student(string n,int a,int r){
        name = n;
        age =a;
        roll =r;
    }
    void show(){
        cout << name <<'\n'<< roll << '\n'<<age<<endl;
    }

};

int main()
{
    students s;
    s.student("samiul",22,62);
    s.name ="alim";
    s.age=23;
    s.show();
    return 0;
}
