#include <iostream>
using namespace std;

int x = 2; // Global Variable

void fun() {
    int x = 60;
    cout << x << endl;
    ::x = 40;
    cout << ::x << endl;
}

int main() {
    ::x = 4; // Updating global variable
    int x = 20; // Local to main() function
    cout << x << endl;
    cout << ::x << endl; // Accessing to global variable with ::

    {
        int x = 50;
        {
            int x = 44;
            cout << x << endl;
        }
        cout << x << endl; // Scope variable
        cout << ::x << endl;
    }

    fun();

    return 0;
}