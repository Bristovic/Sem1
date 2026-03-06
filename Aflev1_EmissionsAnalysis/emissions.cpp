#include <iostream>
#include <vector>
using namespace std;

float yearAvgFunc()
{
    float yearTot=0.0,monthVal=0.0;
    int monthNum=0;            //changing this to measurements instead of months would mean not one month dependent, more flex

    while (monthNum < 12)      //could include an approach for years with missing month data
    {
        monthVal=0.0;
        cout << "Input a measurement for month " << monthNum+1 << endl;
        cin >> monthVal;
        yearTot += monthVal;         //better way of doing this?
        monthNum++;
    }
    
    return yearTot/monthNum;
}



int main()
{ 
    vector<float> yrAvgs;
    string newYear="";
    int loop=1;

    while (loop)  //would like to find a way to make this while True if possible, and also make it a function
    {
        yrAvgs.push_back(yearAvgFunc());

        cout << "Would you like to input data for another year? y/n " << endl;
        cin >> newYear;

        if (newYear != "y")
            {loop=0;} 
        else
            {loop=1;}
    }
    
    int i=0;
    while (i < yrAvgs.size())     // this could be a function
    {
        cout << "Average for year " << i+1 << " is " << yrAvgs[i];
        if (yrAvgs[i]>50)
            {cout << " - WARNING.";}
        else 
            {cout << " - OKAY.";}
        cout << endl;
        i++;
    }


    return 0;
}
