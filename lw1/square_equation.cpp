#include <cstdio>
#include <cmath>

int main()
{
    //1. promt user to enter coefficients
    std::puts("plese enter a and b and c for `ax^2+bx+c=0` :");

    //2. read  coefficients for equation ax^2+bx+c=0`
    float a = 0;
    float b = 0;
    float c = 0;
    std::scanf("%f %f %f", &a, &b, &c);

    //3. solve equation `ax^2+bx+c=0`
    // solution: `ax^2+bx+c=0`
    float D = (b * b) - 4 * a * c;
    if (D > 0)
    {
        float d = std::sqrt(D);
        float x1 = (-b + d) / (2 * a);
        float x2 = (-b - d) / (2 * a);
        std::printf("solution: %f %f\n", x1, x2);
    }
    if (D == 0)
    {
        float x1 = (-b) / (2 * a);
        std::printf("solution: %f\n", x1);
    }
    if (D < 0)
    {
        std::puts("the solution has no roots");
    }
}