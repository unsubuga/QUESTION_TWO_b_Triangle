#include <iostream>
using namespace std;

int findThirdAngle(int angle1, int angle2) {
    return 180 - (angle1 + angle2);
}

int main() {
    int angle1, angle2;
    cout << "Enter the first angle: ";
    cin >> angle1;
    cout << "Enter the second angle: ";
    cin >> angle2;

    int thirdAngle = findThirdAngle(angle1, angle2);
    cout << "The third angle is: " << thirdAngle << endl;
    return 0;
}
