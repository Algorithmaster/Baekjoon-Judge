#include <iostream>

int main()
{
    int x, y, w, h = 0;

    std::cin >> x >> y >> w >> h;

    int nResult = 0;

    if(x > y)   nResult = y;
    else        nResult = x;

    if(nResult > (w - x))   nResult = w - x;
    if(nResult > (h - y))   nResult = h - y;
    
    std::cout << nResult;
    return 0;
}