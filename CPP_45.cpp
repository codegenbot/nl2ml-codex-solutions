#include <iostream>
#include <cassert>
#include <cmath>

double triangle_area(double a, double h)
{
    assert(a > 0 && h > 0);
    return 0.5 * a * h;
}

int main2()
{
    double base, height;
    std::cout << "Enter the base and height of the triangle: ";
    std::cin >> base >> height;
    
    double area = triangle_area(base, height);
    std::cout << "The area of the triangle is: " << area << std::endl;

    return 0;
}