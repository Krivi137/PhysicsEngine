#include "Engine/Application.hpp"
#include "Math/Vec2.hpp"
#include<iostream>
int main()
{
    Vec2 a(3.0f, 4.0f);
    std::cout << a.lengthSquared() << '\n';
    std::cout << a.length() << '\n';
    a.normalize();
    std::cout << "(" << a.x << " " << a.y << ")" << '\n';
    Application app;
    app.run();

    return 0;
}