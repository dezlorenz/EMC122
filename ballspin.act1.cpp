#include <iostream>
using namespace std;

int main()
{   
    int dps = 6; //1 RPM = 6 degree/second
    int revpermin = 3000, x;
    
    cout << "The Degree of the Ball spinning in 3000 revolution per minutes.\n\n";

    x = revpermin * dps; // 3000 * 6

    cout << revpermin << " RPM" << " = " << x << " deg/sec"; // the rotation of ball per second

    return 0;
}

