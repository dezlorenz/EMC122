#include <iostream>
#include <string>

using namespace std;

int main()
{
    int menu, pay, change, price;
    string drink;
    
    cout << "Select your order" << endl << endl;
    
    cout << "[1] Coke (P100)" << endl;
    cout << "[2] Fruta (P120)" << endl;
    cout << "[3] Cobra (80)" << endl << endl;
    
    cout << "Menu: ";
    cin >> menu;

    
    switch(menu)
    {
        case 1:
            price = 100;
            drink = "Coke";
        break;

        case 2:
            price = 120;
            drink = "Fruta";
        break;

        case 3:
            price = 80;
            drink = "Cobra";
        break;

        default:
            cout << "Invalid input";
            return 0;
    } 

    cout << "Your Payment: ";
    cin >> pay;

    if(pay > price)
    {
        change = pay - price;
        cout << "You have purchased " << drink << endl;
        cout << "Change: " << change;
    }
    else if(pay == price)
    {
        cout << "You have purchased " << drink << endl;
        cout << "No Change";
    }
    else
    {
        cout << "insufficient funds";
    }

    return 0;
}
