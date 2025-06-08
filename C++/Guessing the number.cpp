#include <iostream>
using namespace std;
int main()
{
    cout << "\tHello my friend\nPlease choose a number in your mind between 1 to 100\n";
    cout << "Are you choose a number: ";
    string x;
    cin >> x;
    while (x == "no" || x == "No" || x == "NO")
    {
        cout << "Try again, choose a number in your mind: ";
        cin >> x;
    }
    cout << "Good !!\n";
    int low = 1, high = 100, mid, n = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        cout << "Is your number " << mid << "? (1 for yes, 0 for no): ";
        cin >> n;
        if (n == 1)
        {
            cout << "Finally! I guessed your number: " << mid << endl;
            return;
        }
        else
        {
            cout << "Is your number greater than " << mid << "? (1 for yes, 0 for no): ";
            cin >> n;
            if (n == 1)
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return 0;
}
