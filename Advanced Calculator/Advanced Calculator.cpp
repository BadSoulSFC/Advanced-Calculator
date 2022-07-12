#include <iostream>
#include <math.h>

const double pi = 3.141592653589793238;

// 1) 
void discriminant() {
    float A, B, C;
    std::cout << "Enter first value: ";
    std::cin >> A;
    std::cout << "Enter second value: ";
    std::cin >> B;
    std::cout << "Enter third value: ";
    std::cin >> C;
    float D = (B * B) - 4 * (A) * (C);
    std::cout << std::endl << "D = " << D << std::endl;
    system("pause");
}
// 2)
void hypotenuse() {
    float X, Y;
    std::cout << "Enter x: ";
    std::cin >> X;
    std::cout << "Enter y: ";
    std::cin >> Y;
    float hypotenuse = sqrt((X * X) + (Y * Y));
    std::cout << std::endl << "The hypotenuse: " << hypotenuse << std::endl;
    system("pause");
}
// 3)
void AreaOfCircle() {
    double radius, result;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    result = pi * (radius * radius);
    std::cout << std::endl << "Radius: " << result << std::endl;
    system("pause");
}
// 4)
void Quadratic() {
    float a, b, c;
    std::cout << "Enter A: ";
    std::cin >> a;
    std::cout << "Enter B: ";
    std::cin >> b;
    std::cout << "Enter C: ";
    std::cin >> c;
    float secondRoot, firstRoot;
    float determinant = (b * b) - (4 * a * c);
    float squareroot = sqrt(determinant);
    if (determinant > 0) {
        firstRoot = (-b + squareroot) / (2 * a);
        secondRoot = (-b - squareroot) / (2 * a);
        std::cout << "Roots are: " << firstRoot << " and " << secondRoot << std::endl;
    }
    else if (determinant <= 0) {
        std::cout << std::endl << "Root is: " << (-b + squareroot) / (2 * a) << std::endl;
    }
    system("pause");
}
// 5)
void _2D_Distance() {
    float D, X1, X2, Y1, Y2;
    std::cout << "Set the X2: ";
    std::cin >> X2;
    std::cout << "Set the X1 (if no number type 0): ";
    std::cin >> X1;
    std::cout << "Set the Y2: ";
    std::cin >> Y2;
    std::cout << "Set the Y1 (if no number type 0): ";
    std::cin >> Y1;
    D = sqrt((X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1));
    std::cout << std::endl << "Result: " << D << std::endl;
    system("pause");
}
// 6)
void _3D_Distance() {
    float D, x2, x1, y2, y1, z2, z1;
    std::cout << "Set the X2: ";
    std::cin >> x2;
    std::cout << "Set the X1: ";
    std::cin >> x1;
    std::cout << "Set the Y2: ";
    std::cin >> y2;
    std::cout << "Set the Y1: ";
    std::cin >> y1;
    std::cout << "Set the Z2: ";
    std::cin >> z2;
    std::cout << "Set the Z1: ";
    std::cin >> z1;
    D = sqrt((x2 - x1) + (y2 - y1) + (z2 - z1));
    std::cout << std::endl << "D = " << D << std::endl;
    system("pause");
}
// 7)
void Midpoint() {
    float x1, x2, y1, y2, First, Second;
    std::cout << "Type x1: ";
    std::cin >> x1;
    std::cout << "Type x2: ";
    std::cin >> x2;
    std::cout << "Type y1: ";
    std::cin >> y1;
    std::cout << "Type y2: ";
    std::cin >> y2;
    First = (x1 + x2) / 2;
    Second = (y1 + y2) / 2;
    std::cout << std::endl << "(" << First << "," << Second << ")" << std::endl;
    system("pause");
}
// 8)
void Sine() {
    float opposite, hypotenuse, sine;
    std::cout << "Enter the 'opposite': ";
    std::cin >> opposite;
    std::cout << "Enter the 'hypotenuse': ";
    std::cin >> hypotenuse;
    sine = opposite / hypotenuse;
    std::cout << std::endl << "Result: " << sine << std::endl;
    system("pause");
}
// 9)
void Cosine() {
    float hypotenuse, adjacent, cosine;
    std::cout << "Enter the 'adjacent': ";
    std::cin >> adjacent;
    std::cout << "Enter the 'hypotenuse': ";
    std::cin >> hypotenuse;
    cosine = adjacent / hypotenuse;
    std::cout << std::endl << "Result: " << cosine << std::endl;
    system("pause");
}
// 10)
void Tangent() {
    float opposite, adjacent, tangent;
    std::cout << "Enter the 'opposite': ";
    std::cin >> opposite;
    std::cout << "Enter the 'adjacent': ";
    std::cin >> adjacent;
    tangent = opposite / adjacent;
    std::cout << std::endl << "Result: " << tangent << std::endl;
    system("pause");
}
// 11)
void Slope() {
    float y2, y1, x2, x1, slope;
    std::cout << "Coordinate y2: ";
    std::cin >> y2;
    std::cout << "Coordinate y1: ";
    std::cin >> y1;
    std::cout << "Coordinate x2: ";
    std::cin >> x2;
    std::cout << "Coordinate x1: ";
    std::cin >> x1;
    slope = (y2 - y1) / (x2 - x1);
    std::cout << std::endl << "Slope: " << slope << std::endl;
    system("pause");
}
// 12)
void CircumferenceOfCircle() {
    double radius, circumference;
    std::cout << "Enter the radius: ";
    std::cin >> radius;
    circumference = 2 * pi * radius;
    std::cout << "circumference -> " << circumference << std::endl;
    system("pause");
}


int main()
{  
    int choice;
    //list of formulas
    std::cout << "1) Discriminant" << "    " << "2) Hypotenuse" << "    " << "3) Area of circle" << std::endl;
    std::cout << "4) Quadratic" << "       " << "5) 2D Distance" << "   " << "6) 3D Distance" << std::endl;
    std::cout << "7) Midpoint" << "        " << "8) Sine" << "          " << "9) Cosine" << std::endl;
    std::cout << "10) Tangent" << "        " << "11) Slope" << "        " << "12) Circumference Of Circle" << std::endl;

    std::cout << std::endl << "Choose one: ";
    std::cin >> choice;
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
        default:
            std::cout << "No formula found at that number...Try again: " << std::endl;
            return main();
    }
}