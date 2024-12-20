#include <iostream>
#include <cstring>

using namespace std;

class Emp {
    int id;
    char name[20];
public:
    void setId(int _id) {
        id = _id;
    }

    void setName(const char* _name) {
        strcpy(name, _name);
    }

    Emp(int _id, const char* _name) {
        id = _id;
        strcpy(name, _name);
    }

    ~Emp() {
        cout << "From Destructor: Object Deleted" << endl;
    }

    void fun(int _id, const char* _name) {
        cout<<"In Fun\n";
        cout << _id << " " << _name << endl;
    }

    void print() {
        cout<< id <<":"<< name << endl;
    }
};

int main() {
    Emp* e1 = new Emp(0, "");
    cout << "Enter id: \n";
    int id;
    cin >> id;
    e1->setId(id);

    cout << "Enter Name: \n";
    char name[20];
    cin >> name;
    e1->setName(name);
        e1->print();

    cout << "Before Fun\n";
    e1->fun(0, "NoName");
    cout << "After Fun\n";
    e1->print();

    delete e1;

    return 0;
}
