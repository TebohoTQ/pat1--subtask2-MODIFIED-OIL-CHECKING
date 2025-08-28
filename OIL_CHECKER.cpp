// Mangwinya store oil temperature monitor
#include <iostream>
using namespace std;

int main() {
    // Declaring variables for all temperature readings
    int temp_reading1, temp_reading2, temp_reading3;

    // Input temperature readings
    cout << "Enter temp-reading1: ";
    cin >> temp_reading1;
    cout << "Enter temp-reading2: ";
    cin >> temp_reading2;

    // Input third temperature reading
    cout << "Enter temp-reading3: ";
    cin >> temp_reading3;

    // Check if the temperature for frying is at the required range
    if (temp_reading3 > 150 && temp_reading3 < 190) {
        cout << "You may start frying Mangwinya." << endl;
    } else {
        cout << "Oil is not ready for frying." << endl;
    }

    return 0;
}
