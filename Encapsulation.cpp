#include <iostream>
using namespace std;

class Student {
public: 
    int id;
    int age;
    string name;
    int nos;

private:
    float *gpa;
    string gfName;

public:
    // default constructor
    Student() {
        cout << "default constructor....." << endl;
    }

    // Parameterized Constructor
    Student(int id, int age, string name, int nos, float gpa, string gf) {
        cout << "Parameterized constructor..." << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
        this->gfName = gf;
    }

    // Copy Constructor
    Student(const Student &srcObj) {
        cout << "Copy constructor..." << endl;
        this->id = srcObj.id;
        this->age = srcObj.age;
        this->name = srcObj.name;
        this->nos = srcObj.nos;
    }

    void study() {
        cout << "Studying...." << endl;
    }

    void sleep() {
        cout << "Sleeping...." << endl;
    }

    void bunk() {
        cout << this -> name << "Bunking...." << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student destructor..." << endl;
        delete this->gpa;
    }

private:
    void gfChatting() {
        cout << this->name << "Chatting with gf..." << endl;
    }
};
 
int main() {
    Student A(1,2,"Anand", 5, 9.4, "Khushi");
    cout << A.age << endl;
    // cout << A.gfName << endl;
    // A.gfChatting();
    return 0;
}