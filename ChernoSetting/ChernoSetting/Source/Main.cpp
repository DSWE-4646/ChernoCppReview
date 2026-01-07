#include <iostream>
struct Vec2
{
    float x, y;
};
struct Vec4
{
    union
    {
        struct
        {
            union { float x, r; };
            union { float y, g; };
            union { float z, b; };
            union { float w, a; };
        };

        struct {
            Vec2 a;
            Vec2 b;
        }byVec2;
    };
    Vec4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}
};

int main()
{
    Vec4 vec(1.0f, 2.0f, 3.0f, 4.0f);
    vec.z = 500.0f;
    std::cout << vec.byVec2.b.x << std::endl; 
    vec.g = 10.0f;
}