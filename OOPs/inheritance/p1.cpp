#include <iostream>
using namespace std;

// inheritance

class trip
{
    static int Tnumber;
    int distance;
    int sharedPrincing;
    double surge;
    static double rate;

public:
    static void inputrate()
    {
        cout << "enter rate";
        cin >> rate;
    }
};
class cartrip : public trip
{
    const int waitingminRate = 8;
};
class biketrip : public trip
{

    int waitingmin;
};

Design and implement a C++ solution that:
1.	Defines a base class Trip (trip number, distance in km, shared pricing data) and
 two derived classes: CarTrip (adds waiting minutes, charged at Rs 8 per minute and not affected by surge) 
 and BikeTrip (costs 60% of the car rate, no waiting charge).
2.	Stores the per-km rate andthe surge multiplier once for the whole company, with static functions to set them. 
The surge setter must reject values below 1.0 or above 3.0.
3.	Generates trip numbers automatically starting at 5001. A trip number can never be changed after creation.
4.	Provides a static function that returns the number of trips completed, and a static function estimateFare(double km) 

that returns the car fare (distance × rate × surge) without creating any trip object.
5.	Marks every function that only reads data as const. The receipt-printing function must take its trip by const reference.
6.	Stores the day's trips in arrays of objects (separate arrays for car and bike trips) and uses loops to print receipts
 and total the earnings.
7.	Uses inline functions for the small getters.
Trip type	Fare formula
Car	distance × rate × surge + waiting minutes × 8
Bike	distance × rate × surge × 0.6
