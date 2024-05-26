#include <iostream>
#include <vector>

int factor2(int nNumber)
{
    if(nNumber <= 0)    return 0;

    std::vector<int> vec;
    bool bFalg = true;
    int nMax = 0;

    for(int i=1; i<=nNumber/2; i++)
    {
        if(nNumber % i == 0)
        {
            nMax += i;
            vec.push_back(i);
        }

        if(nMax > nNumber)
        {
            bFalg = false;
            break;
        }
    }

    if(nMax == nNumber)
    {
        std::cout << nNumber << " = " << vec[0];

        for(int i=1; i<vec.size(); i++)
        {
            std::cout << " + " << vec[i];
        }
    }
    else
        std::cout << nNumber << " is NOT perfect.";

    std::cout << "\n";

    return 0;
}

int main()
{
    while (1)
    {
        int nA = 0;

        std::cin >> nA;

        if(nA < 0)  break;

        factor2(nA);
    }
    

    return 0;
}