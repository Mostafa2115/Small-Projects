#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main()
{
    string name;
    cout << "\nEnter your name : ";
    cin >> name;
    int password;
    cout << "Enter password : ";
    cin >> password;
    while (password >= 0)
    {
        if (password == 7888)
        {
            break;
        }
        else
        {
            cout << "Again" << endl;
            cout << "Enter password : ";
            cin >> password;
        }
    }
    cout << "\a\t\t\"Hello " << name << "\"" << endl;
    cout << "\t\tWelcome to my Program " << endl;
    cout << "--------------------------------\n";
    int hours;
    int minutes;
    int seconds;
    cout << "Enter hours : ";
    cin >> hours;
    cout << "Enter minutes : ";
    cin >> minutes;
    cout << "Enter seconds : ";
    cin >> seconds;
    cout << "Start!";
    for (int h = hours; h <= 23 && h >= 0; h--)
    {
        for (int m = minutes; m <= 59 && m >= 0; m--)
        {
            for (int s = seconds; s <= 59 && s >= 0; s--)
            {
                cout << "\n"
                     << h << " : " << m << " : " << s;
                this_thread::sleep_for(chrono::seconds(1));
                if (s == 0 && m == 0 && h == 0)
                    break;
            }
            seconds = 59;
            if (seconds == 0 && m == 0 && h == 0)
                break;
        }
        minutes = 59;
        if (seconds == 0 && minutes == 0 && h == 0)
            break;
    }
    cout << "\a";
    return 0;
}
