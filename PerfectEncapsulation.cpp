#include <iostream>
using namespace std;

class Student {
private: 
    int id;
    int age;
    string name;
    int nos;
    float *gpa;
    string gfName;

public:
    void setGpa(float a) {
        // Layer of Authentication
        *this->gpa = a;
    }

    float getGpa() const {
        return *this->gpa;
    }

    int getAge() const {
        return this->age;
    }

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
    Student A(1,22,"Anand", 5, 9.4, "xyz");
    // cout << A.age << endl;
    // cout << A.gfName << endl;
    // A.gfChatting();
    cout << A.getGpa() << endl;
    A.setGpa(6.7);
    cout << A.getGpa() << endl;
    cout << A.getAge() << endl;
    return 0;
}