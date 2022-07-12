#include <iostream>
#include <math.h>

const double pi = 3.141592653589793238;
using namespace std;

// 1) 
void discriminant() {
    float A, B, C;
    cout << "Enter first value: ";
    cin >> A;
    cout << "Enter second value: ";
    cin >> B;
    cout << "Enter third value: ";
    cin >> C;
    float D = (B * B) - 4 * (A) * (C);
    cout << endl << "D = " << D;
}
// 2)
void hypotenuse() {
    float X, Y;
    cout << "Enter x: ";
    cin >> X;
    cout << "Enter y: ";
    cin >> Y;
    float hypotenuse = sqrt((X * X) + (Y * Y));
    cout << endl << "The hypotenuse: " << hypotenuse;
}
// 3)
void AreaOfCircle() {
    float radius, result;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    result = pi * (radius * radius);
    cout << endl << "Radius: " << result;
}
// 4)
void Quadratic() {
    float a, b, c;
    cout << "Enter A: " << endl;
    cin >> a;
    cout << "Enter B: " << endl;
    cin >> b;
    cout << "Enter C: " << endl;
    cin >> c;
    float secondRoot, firstRoot;
    float determinant = (b * b) - (4 * a * c);
    float squareroot = sqrt(determinant);
    if (determinant > 0) {
        firstRoot = (-b + squareroot) / (2 * a);
        secondRoot = (-b - squareroot) / (2 * a);
        cout << "Roots are: " << firstRoot << " and " << secondRoot << endl;
    }
    else if (determinant == 0) {
        cout << endl << "Root is: " << (-b + squareroot) / (2 * a);
    }
}
// 5)
void _2D_Distance() {
    float D, X1, X2, Y1, Y2;
    cout << "Set the X2: ";
    cin >> X2;
    cout << "Set the X1 (if no number type 0): ";
    cin >> X1;
    cout << "Set the Y2: ";
    cin >> Y2;
    cout << "Set the Y1 (if no number type 0): ";
    cin >> Y1;
    D = sqrt((X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1));
    cout << endl << "Result: " << D;
}
// 6)
void _3D_Distance() {
    float D, x2, x1, y2, y1, z2, z1;
    cout << "Set the X2: ";
    cin >> x2;
    cout << "Set the X1: ";
    cin >> x1;
    cout << "Set the Y2: ";
    cin >> y2;
    cout << "Set the Y1: ";
    cin >> y1;
    cout << "Set the Z2: ";
    cin >> z2;
    cout << "Set the Z1: ";
    cin >> z1;
    D = sqrt((x2 - x1) + (y2 - y1) + (z2 - z1));
    cout << endl << "D = " << D;
}
// 7)
void Midpoint() {
    float x1, x2, y1, y2, First, Second;
    cout << "Type x1: ";
    cin >> x1;
    cout << "Type x2: ";
    cin >> x2;
    cout << "Type y1: ";
    cin >> y1;
    cout << "Type y2: ";
    cin >> y2;
    First = (x1 + x2) / 2;
    Second = (y1 + y2) / 2;
    cout << endl << "(" << First << "," << Second << ")";
}
// 8)
void Sine() {
    float opposite, hypotenuse, sine;
    cout << "Enter the 'opposite': ";
    cin >> opposite;
    cout << "Enter the 'hypotenuse': ";
    cin >> hypotenuse;
    sine = opposite / hypotenuse;
    cout << endl << "Result: " << sine;
}
// 9)
void Cosine() {
    float hypotenuse, adjacent, cosine;
    cout << "Enter the 'adjacent': ";
    cin >> adjacent;
    cout << "Enter the 'hypotenuse': ";
    cin >> hypotenuse;
    cosine = adjacent / hypotenuse;
    cout << endl << "Result: " << cosine;
}
// 10)
void Tangent() {
    float opposite, adjacent, tangent;
    cout << "Enter the 'opposite': ";
    cin >> opposite;
    cout << "Enter the 'adjacent': ";
    cin >> adjacent;
    tangent = opposite / adjacent;
    cout << endl << "Result: " << tangent;
}
// 11)
void Slope() {
    float y2, y1, x2, x1, slope;
    cout << "Coordinate y2: ";
    cin >> y2;
    cout << "Coordinate y1: ";
    cin >> y1;
    cout << "Coordinate x2: ";
    cin >> x2;
    cout << "Coordinate x1: ";
    cin >> x1;
    slope = (y2 - y1) / (x2 - x1);
    cout << endl << "Slope: " << slope;
}
// 12)
void CircumferenceOfCircle() {
    float radius, circumference;
    cout << "Enter the radius: ";
    cin >> radius;
    circumference = 2 * pi * radius;
    cout << "circumference -> " << circumference;
}

int main()
{  
    int choice;
    //list of formulas
    cout << "1) Discriminant" << "    " << "2) Hypotenuse" << "    " << "3) Area of circle" << endl;
    cout << "4) Quadratic" << "       " << "5) 2D Distance" << "   " << "6) 3D Distance" << endl;
    cout << "7) Midpoint" << "        " << "8) Sine" << "          " << "9) Cosine" << endl;
    cout << "10) Tangent" << "        " << "11) Slope" << "        " << "12) Circumference Of Circle" << endl;

    cout << endl << "Choose one: ";
    cin >> choice;
    switch (choice) {
        case 1:
            discriminant();
            break;
        case 2:
            hypotenuse();
            break;
        case 3: 
            AreaOfCircle();
            break;
        case 4: 
            Quadratic();
            break;
        case 5:
            _2D_Distance();
            break;
        case 6:
            _3D_Distance();
            break;
        case 7:
            Midpoint();
            break;
        case 8: 
            Sine();
            break;
        case 9: 
            Cosine();
            break;
        case 10: 
            Tangent();
            break;
        case 11: 
            Slope();
            break;
        case 12:
            CircumferenceOfCircle();
            break;
    }
}