#include <iostream>

using namespace std;

int main()
{
    int intgr;

    cout << "Input any positive integer: ";
    cin >> intgr;

    while(intgr != 1)
    {   
        if(intgr & 1)
            intgr = intgr * 3 + 1;
        else
            intgr = intgr / 2;

        cout << " current given value is " << intgr << endl;
    }


    return 0;
}

