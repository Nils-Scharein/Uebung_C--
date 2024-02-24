#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

class Kreise {
private:
    int a = 10;
    int b = 10;
public:
    float radius;

    float flaeche()
    {
        return M_PI * radius * radius;
    }
};

int main()
{
    Kreise circle;
    circle.radius = 25;
    Kreise Peter;
    Peter.radius = 35;
    std::cout << circle.flaeche() << std::endl;
    std::cout << Peter.flaeche();
    return 0;
}