#include <iostream>
using namespace std;

int main()
{
    double milesdriven, milespergallon, costpergallon;
    double parkingfees, tolls, totalcost;

    cout << " Enter miles driven: ";
    cin >> milesdriven;

    cout << " Enter miles per gallon: ";
    cin >> milespergallon;

    cout << " Enter cost per gallon: ";
    cin >> costpergallon;

    cout << " Enter parking fees: ";
    cin >> parkingfees;

    cout << " Enter tolls: ";
    cin >> tolls;

    totalcost = ((milesdriven / milespergallon) * costpergallon) + parkingfees + tolls;
    cout << " Total cost of the trip is: $" << totalcost << endl;
    return 0;
}