#include <iostream>
#include <string>

using namespace std;

int main()
{
    int menu, pay, change, price;
    string phone;
    
    cout << "Select your order" << endl << endl;
    
    cout << "[1] Realme C11 (P7,999)" << endl;
    cout << "[2] Infinix ZERO (P12,990)" << endl;
    cout << "[3] Xiaomi 10t (P20,990)" << endl << endl;
    
    cout << "Menu: ";
    cin >> menu;

    
    switch(menu)
    {
        case 1:
            price = 7,999;
            phone = "Realme C11";
        break;

        case 2:
            price = 12,990;
            phone = "Infinix ZERO";
        break;

        case 3:
            price = 20,990;
            phone = "Xiaomi 10t";
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
        cout << "You have purchased " << phone << endl;
        cout << "Change: " << change;
    }
    else if(pay == price)
    {
        cout << "You have purchased " << phone << endl;
        cout << "No Change";
    }
    else
    {
        cout << "insufficient funds";
    }

    return 0;
}