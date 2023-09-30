#include <iostream>
using namespace std;
int main()
{
    while (true)
    {

        float a, b;
        cout << "Enter your first number: " << endl;
        cin >> a;
        cout << "Enter your second number: " << endl;
        cin >> b;
        float c;
        cout << "Enter your operation by entering the following numbers \nif you want to add then 1 \nif you want to subtract then 2 \nif you want to multiply then 3 \nif you want to divide then 4 \nif you want to increase both the number by 1 then 5 \nif you want to decresse both the number by 1 then 6 : " << endl;
        cin >> c;
        if (c == 1)
        {
            cout << "Your answer is: " << a + b << endl;
        }
        else if (c == 2)
        {
            cout << "Your answer is: " << a - b << endl;
        }
        else if (c == 3)
        {
            cout << "Your answer is: " << a * b << endl;
        }
        else if (c == 4)
        {
            int inta = static_cast<int>(a);
            int intb = static_cast<int>(b);
            cout << "Your answer is " << a / b << endl;
            cout << "Your rounded answer is: " << inta / intb << endl;
            cout << "and reminder is: " << inta % intb << endl;
        }
        else if (c == 5)
        {
            cout << "Your answer for first number is: " << a++ << endl;
            cout << "Your answer for second number is: " << b++ << endl;
        }
        else if (c == 6)
        {
            cout << "Your answer for first number is: " << a-- << endl;
            cout << "Your answer for second number is: " << b-- << endl;
        }
    }
}