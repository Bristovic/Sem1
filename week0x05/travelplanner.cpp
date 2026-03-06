#include <iostream>
#include <vector>
using namespace std;

float dist()
{
    cout << "How far will you travel in km? ";
    float traveldist=0.0;
    cin >>  traveldist;
    return traveldist;
}

float speed()
{
    cout << "What is your expected average speed in km/h? ";
    float travelspeed=0.0;
    cin >> travelspeed;
    return travelspeed;
}

float travel_time()
{
    float time = (dist()/speed())*60;
    cout << "Your expected travel time is " << time << " minutes." << endl;
    return time;
}

float calorie_burn(float trvl_tm)
{
    float burn = 10.5 * trvl_tm;
    cout << "Your approximate caloric expenditure " << burn << " kcal." << endl;
    return burn;
}

int main()
{
    calorie_burn(travel_time());
    return 0;
}