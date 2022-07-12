#include <iostream>
#include <math.h>

const double pi = 3.141592653589793238;
using namespace std;


void discriminant() {
    double A, B, C;
    cout << "Enter first value: ";
    cin >> A;
    cout << "Enter second value: ";
    cin >> B;
    cout << "Enter third value: ";
    cin >> C;
    double D = (B * B) - 4 * (A) * (C);
    cout << "D = b2 - 4ac = " << D;
}


int main()
{
    int choice;
    //list of formulas

    cout << "1) Discriminant" << endl;

    cout << "Choose one: ";
    cin >> choice;
    switch (choice) {
        case 1:
            discriminant();
        

    }
}

