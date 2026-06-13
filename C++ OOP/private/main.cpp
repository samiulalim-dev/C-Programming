#include <iostream>

using namespace std;

class student{
private:
    int roll;

public:
    void addRoll(int r){
        roll =r;
    }

    void showRoll(){
    cout << roll << endl;
    }
};


int main()
{
    student s;
    s.addRoll(123456);
    s.showRoll();
    return 0;
}
