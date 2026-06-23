#include <iostream>
using namespace std;

class Student {
public: 
    int id;
    int age;
    string name;
    int nos;
    float *gpa;

    // default constructor
    Student() {
        cout << "default constructor....." << endl;
    }

    // Parameterized Constructor
    Student(int id, int age, string name, int nos, float gpa) {
        cout << "Parameterized constructor..." << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
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
};
 
int main() {
    // Student A;
    // A.id = 1;
    // A.age = 15;
    // A.name = "Anand";
    // A.nos = 6;

    // A.study();

    // Student B;
    // B.id = 2;
    // B.age = 25;
    // B.name = "Ankit";
    // B.nos = 10;

    // B.bunk();

    // Student A(1, 15, "Anand", 6);
    // Student C(3, 25, "Ankit", 4);
    
    // A.bunk();
    // C.sleep();

    // Copy constructor
    // Student B = A;
    // Student B(A);
    // cout << B.name << " " << A.name;

    // Dynamic allocation or student pointer
    Student *A = new Student(1,14, "Babban", 7, 9.3);
    cout << A->name << endl;
    cout << A->age << endl;
    A->bunk();
    delete A; // For Dynamic need to call destructor

    return 0;
}