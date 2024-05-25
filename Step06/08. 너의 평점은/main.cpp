#include <iostream>

using namespace std;

int main()
{
    string strMajorName; double dGrade[20] = {0.0, }; string strInput;
    double dAvg = 0.0; float sumGrade = 0.0;
    double dScore[20] = {0.0, };

    for(int i=0; i<20; i++)
    {
        cin >> strMajorName >> dGrade[i] >> strInput;

        if("A+" == strInput)        dScore[i] = 4.5;
        else if("A0" == strInput)   dScore[i] = 4.0;   
        else if("B+" == strInput)   dScore[i] = 3.5;  
        else if("B0" == strInput)   dScore[i] = 3.0;  
        else if("C+" == strInput)   dScore[i] = 2.5;  
        else if("C0" == strInput)   dScore[i] = 2.0;  
        else if("D+" == strInput)   dScore[i] = 1.5;   
        else if("D0" == strInput)   dScore[i] = 1.0;   
        else if("F"  == strInput)   dScore[i] = 0.0;   
        else if("P"  == strInput)   { dScore[i] = 0.0; dGrade[i] = 0.0;};

        dAvg += dScore[i] * dGrade[i];
        sumGrade += dGrade[i];
    }

    cout << dAvg/sumGrade;

    return 0;
}