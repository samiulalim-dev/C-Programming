#include <iostream>
using namespace std;

class Student {
public:
    string name;
};

int main() {
    Student s;
    s.name = "Samiul";

    cout << s.name<<endl;

    return 0;
}
