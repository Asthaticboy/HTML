#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int a;
        cout << "Enter the number of the Weak" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;

        case 3:
            cout << "Wednesday" << endl;
            break;

        case 4:
            cout << "Thrusday" << endl;
            break;

        case 5:
            cout << "Friday" << endl;
            break;

        case 6:
            cout << "Saturday" << endl;
            break;

        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "No Day Found" << endl;

            break;
        }
    }
}