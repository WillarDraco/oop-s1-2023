#include <iostream>
#include <string>
#include <time.h>
#include "Motorbike.h"
#include "Car.h"
#include "Bus.h"
using namespace std;

int main(void) {
    int carCount = 0;
    int busCount = 0;
    int motorbikeCount = 0;
    cout << "Please enter the number of cars you want to park: ";
    cin >> carCount;
    cout << endl;
    cout << "Please enter the number of buses you want to park: ";
    cin >> busCount;
    cout << endl;
    cout << "Please enter the number of motorbikes you want to park: ";
    cin >> motorbikeCount;
    cout << endl;

    int vehicleCount = busCount + carCount + motorbikeCount;
    Vehicle *parked[vehicleCount];

    for (int i = 0; i < vehicleCount; i++) {
        if (i <= carCount) {
            Car parked[i];
            parked[i].getParkingDuration();
        }
        if (i > carCount && i <= busCount) {
            Bus parked[i];
            parked[i].getParkingDuration();
        }
        if (i > busCount && i <= motorbikeCount) {
            Motorbike parked[i];
            parked[i].getParkingDuration();
        }
    }
}