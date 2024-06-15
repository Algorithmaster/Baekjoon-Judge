#include <iostream>
#include <utility>

std::pair<int, int> calcul(int a, int b, int c, int d, int e, int f)
{
    std::pair<int, int> p;

    p.first = (c * e - b * f) / (a * e - b * d);
    p.second = ((c*d)-(a*f))/((b*d)-(a*e));

    return p;
}

int main()
{
    int a, b, c, d, e, f = 0;

    std::cin >> a >> b >> c >> d >> e >> f;

    std::pair<int, int> p1;
    p1 = calcul(a, b, c, d, e, f);

    std::cout << p1.first << " " << p1.second << std::endl;

    return 0;
}