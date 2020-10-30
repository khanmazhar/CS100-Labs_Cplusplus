#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double distance, acceleration, initial_speed, final_velocity;
    cout << "Enter distance in meters: ";
    cin >> distance;

    cout << "Enter acceleration(m/s^2): ";
    cin >> acceleration;

    cout << "Enter initial speed(m/s): ";
    cin >> initial_speed;

    //Calculating final velocity
    final_velocity = sqrt(pow(initial_speed,2) + 2 * acceleration * distance);
    cout << final_velocity;
    return 0;
}
