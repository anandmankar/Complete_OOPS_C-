#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    protected:
    string name;

    public:
    string model;
    int noOfTyres;

    string getName() {
        return this->name;
    }

    Vehicle(string name, string model, int noOfTypres) {
        cout << "Inside Vehicle constructor" << endl;
        this->name = name;
        this->model = model;
        this->noOfTyres = noOfTypres;
    }

    public:
    void start_engine() {
        cout << "Engine is Starting " << name << " " << model << endl;
    }

    void stop_engine() {
        cout << "Engine is Stoping " << name << " " << model << endl;
    }
};

class Car : public Vehicle {
    public:
    int noOfDoors;
    string transmissionType;

    Car(string name, string model, int noOfTyres, int noOfDoors, string transmissionType) : Vehicle(name, model, noOfTyres) {
        cout << "Inside Car constructor" << endl;
        this->noOfDoors = noOfDoors;
        this->transmissionType = transmissionType;
    }
    
    void startAC() {
        cout << "AC has started of " << name << endl;
    }
};

int main() {
    Car A("tata nexon", "LXI", 4, 4, "Manual");
    A.start_engine();
    A.startAC();
    A.stop_engine();
    cout << A.getName() << endl;
    return 0;
}