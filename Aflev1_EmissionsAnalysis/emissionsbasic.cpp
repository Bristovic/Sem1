#include <iostream>
using namespace std;

float yearAvgFunc()
{
    float yearTot=0.0;
    float monthVal=0.0;
    int monthNum=1;
    while (monthNum < 13)
    {
        monthVal=0.0;
        cout << "Input a measurement for month " << monthNum << endl;
        cin >> monthVal;
        yearTot += monthVal;
        monthNum++;
    }
    
    return yearTot/(monthNum-1);
}



int main()
{ 
    float yearAvg;
    yearAvg = yearAvgFunc();

    string newYear="";
    cout << "Would you like to input data for another year? y/n " << endl;
    cin >> newYear;

    
    cout << "Average for year is " << yearAvg;
    if (yearAvg > 50)
        cout << " - WARNING.";
    else
        cout << " - OK.";

    return 0;
}
