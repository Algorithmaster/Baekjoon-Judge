#include <iostream>

void sort(int* a)
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2-i; j++)
        {
            if(a[j] < a[j+1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

int main()
{
    int nX[3] = {0,};
    while(1)
    {
        for(int i=0; i<3; i++)
            std::cin >> nX[i];

        sort(nX);
        if(nX[0] == 0)  break;
        else if(nX[0] >= nX[1] + nX[2])           std::cout << "Invalid";
        else if(nX[0] == nX[1] && nX[0] == nX[2]) std::cout << "Equilateral";
        else if(nX[0] == nX[1] || nX[1] == nX[2]) std::cout << "Isosceles";
        else std::cout << "Scalene";

        std::cout << "\n";
    }
    
    return 0;
}