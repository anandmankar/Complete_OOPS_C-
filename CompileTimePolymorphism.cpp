#include <iostream>
using namespace std;

// Function Overloading
class Add {
public:
    int sum(int x, int y) {
        cout << "In sum of two integers: ";
        return x + y;
    }

    int sum(int x, int y, int z) {
        cout << "In sum of Three integers: ";
        return x + y + z;
    }

    double sum(double x, double y) {
        cout << "In sum of two doubles: ";
        return x + y;
    }
};

int main() {
    Add add;
    cout << add.sum(5,5) << endl;
    cout << add.sum(4,5,9) << endl;
    cout << add.sum(4.5, 6.5) << endl;
}