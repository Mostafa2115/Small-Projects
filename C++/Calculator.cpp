#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>
using namespace std;
double fact(int number)
{
    double fac = 1;
    if (number == 0 || number == 1)
        fac = 1;
    else if (number < 0)
        cout << "Error";
    else
        for (int i = 1; i <= number; i++)
            fac = fac * i;
    return fac;
}
void password()
{
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
}
int main()
{
    cout << "\t\t\t\t\t\t\"Calculator\"";
    cout << "\n\t\t\t\t\t\t------------\n";
    string name;
    cout << "\nEnter your name : ";
    cin >> name;
    password();
    cout << "\a\t\t\"Hello " << name << "\"" << endl;
    cout << "\t\tWelcome to my Program " << endl;
    cout << "\t\t----------------------" << endl;
    cout << "\twindow\"0\"\t\"Exit\"\n\twindow\"1\"\t\"ADD,MUL\"\n\twindow\"2\"\t\"Trigonometric functions\"\n\twindow\"3\"\t\"more operations\"\n\twindow\"4\"\t\"Factorial\"\n\twindow\"5\"\t\"Reverse\"\n\twindow\"6\"\t\"Circle\"\n\twindow\"7\"\t\"SUB,DIV (2 numbers)\"\n\twindow\"8\"\t\"Trigonometric functions 2\"\n\twindow\"9\"\t\"Average of numbers\"\n\twindow\"10\"\t\"Binary to Decimal\"\n\twindow\"11\"\t\"Octal to Decimal\"\n\twindow\"12\"\t\"Permutations\"\n\twindow\"13\"\t\"Combinations\"\n\twindow\"14\"\t\"Dec to Bin,Oct,Hex\"\n"
         << endl;
    int window;
    cout << "Enter the window : ";
    cin >> window;
    while (window >= 0)
    {
        if (window == 0)
        {
            cout << "\a\n\"Thank you for using the Program\" :) \n"
                 << endl;
            this_thread::sleep_for(chrono::seconds(2));
            break;
        }
        else if (window == 1)
        {
            cout << "\t\t\"ADD,MUL\"" << endl;
            int n;
            cout << "How many numbers to calculate : ";
            cin >> n;
            double numbers[n];
            for (int i = 0; i < n; i++)
            {
                cout << "Enter number"<<i+1<<" : ";
                cin >> numbers[i];
            }
            char op;
            cout << "Enter operator(+,*) : ";
            cin >> op;
            int sumA = 0;
            int sumM = 1;
            switch (op)
            {
            case '+':
                for (int i = 0; i < n; i++)
                    sumA = sumA + numbers[i];
                cout << "The result = " << sumA << endl;
                break;
            case '*':
                for (int i = 0; i < n; i++)
                    sumM = sumM * numbers[i];
                cout << "The result = " << sumM << endl;
                break;
            default:
                cout << "Wrong operation\n";
            }
        }
        else if (window == 2)
        {
            cout << "\t\t\"Trigonometric functions\"" << endl;
            double Theta;
            cout << "Enter Theta : ";
            cin >> Theta;
            int TF;
            cout << "Enter (sin\"1\",cos\"2\",tan\"3\") : ";
            cin >> TF;
            double result;
            if (TF == 1)
                result = sin(Theta * M_PI / 180);
            else if (TF == 2)
                result = cos(Theta * M_PI / 180);
            else if (TF == 3)
                result = tan(Theta * M_PI / 180);
            else
                cout << "ERROR\n";
            cout << "The result = " << result << endl;
        }
        else if (window == 3)
        {
            cout << "\t\t\"More operations\"" << endl;
            double number;
            cout << "Enter the number : ";
            cin >> number;
            cout << "exp\t\t1\t\tlog n1(n2)\t8\nlog\t\t2\t\tfloor\t\t9\nlog10\t\t3\t\tround\t\t10\npow\t\t4\t\tabs\t\t11\nsqrt\t\t5\ncbrt\t\t6\nceil\t\t7\n";
            int op2;
            cout << "Enter the operator : ";
            cin >> op2;
            double result_;
            double number2;
            switch (op2)
            {
            case 1:
                result_ = exp(number);
                cout << "The result = " << result_;
                break;
            case 2:
                result_ = log(number);
                cout << "The result = " << result_;
                break;
            case 3:
                result_ = log10(number);
                cout << "The result = " << result_;
                break;
            case 4:
                cout << "Enter number two : ";
                cin >> number2;
                result_ = pow(number, number2);
                cout << "The result = " << result_;
                break;
            case 5:
                result_ = sqrt(number);
                cout << "The result = " << result_;
                break;
            case 6:
                result_ = cbrt(number);
                cout << "The result = " << result_;
                break;
            case 7:
                result_ = ceil(number);
                cout << "The result = " << result_;
                break;
            case 8:
                result_ = floor(number);
                cout << "The result = " << result_;
                break;
            case 9:
                cout << "Enter number two : ";
                cin >> number2;
                result_ = log(number) / log(number2);
                cout << "The result = " << result_;
                break;
            case 10:
                result_ = round(number);
                cout << "The result = " << result_;
                break;
            case 11:
                result_ = abs(number);
                cout << "The result = " << result_;
                break;
            default:
                cout << "Not exist" << endl;
            }
        }
        else if (window == 4)
        {
            cout << "\t\t\"Factorial\"" << endl;
            int number;
            int factorial;
            cout << "Enter the number : ";
            cin >> number;
            factorial = fact(number);
            cout << "The result = " << factorial << endl;
        }
        else if (window == 5)
        {
            cout << "\t\t\"Reverse number\"" << endl;
            int rev = 0;
            int number;
            cout << "Enter the number : ";
            cin >> number;
            while (number != 0)
            {
                rev = rev * 10 + number % 10;
                number = number / 10;
            }
            cout << "The result = " << rev << endl;
        }
        else if (window == 6)
        {
            cout << "\t\t\"Circle\"\n";
            double radius, area_c, circum_c;
            cout << "Enter radius : ";
            cin >> radius;
            area_c = M_PI * pow(radius, 2);
            circum_c = 2 * M_PI * radius;
            cout << "The area = " << area_c << endl;
            cout << "The circum = " << circum_c << endl;
        }
        else if (window == 7)
        {
            cout << "\t\t\"SUD,DIV (two numbers)\"\n";
            double number1, number2, result2;
            char op3;
            cout << "Enter first number : ";
            cin >> number1;
            cout << "Enter second number : ";
            cin >> number2;
            cout << "Enter operator (-,/) : ";
            cin >> op3;
            switch (op3)
            {
            case '-':
                result2 = number1 - number2;
                cout << "The result = " << result2 << endl;
                break;
            case '/':
                if (number2 != 0)
                {
                    result2 = number1 / number2;
                    cout << "The result = " << result2 << endl;
                }
                else
                    cout << "ERROR! Division by zero" << endl;
                break;
            default:
                cout << "Wrong operation " << endl;
            }
        }
        else if (window == 8)
        {
            cout << "\t\t\"Trigonometric functions 2\"" << endl;
            double number;
            cout << "Enter the number : ";
            cin >> number;
            int TF2;
            cout << "Enter (asin\"1\",acos\"2\",atan\"3\") : ";
            cin >> TF2;
            double theta;
            if (TF2 == 1)
                theta = asin(number) * 180 / M_PI;
            else if (TF2 == 2)
                theta = acos(number) * 180 / M_PI;
            else if (TF2 == 3)
                theta = atan(number) * 180 / M_PI;
            else
                cout << "ERROR\n";
            cout << "The theta : " << theta << endl;
        }
        else if (window == 9)
        {
            cout << "\t\t\"Average of numbers\"" << endl;
            int n;
            cout << "How many numbers to average ? ";
            cin >> n;
            double Ave[n];
            for (int i = 0; i < n; i++)
            {
                cout << "Enter number : ";
                cin >> Ave[i];
            }
            double sumAV = 0;
            for (int i = 0; i < n; i++)
                sumAV = sumAV + Ave[i];
            cout << "The Average = " << sumAV / double(n) << endl;
        }
        else if (window == 10)
        {
            cout << "\t\t\"Binary to Decimal\"\n";
            int n;
            cout << "How many numbers to calculate to decimal ? ";
            cin >> n;
            int BIN[n];
            int decimal = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                cin >> BIN[i];
            }
            int i = 0;
            int j = n - 1;
            while (i < j)
            {
                int Empty = BIN[i];
                BIN[i] = BIN[j];
                BIN[j] = Empty;
                i++;
                j--;
            }
            for (int i = n - 1; i >= 0; i--)
            {
                decimal = decimal + (BIN[i] * pow(2, i));
            }
            cout << "The decimal number = " << decimal << endl;
        }
        else if (window == 11)
        {
            cout << "\t\t\"Octal to Decimal\"\n";
            int number;
            cout << "Enter octal number : ";
            cin >> number;
            int decimal = 0;
            for (int i = 0; i < 6; i++)
            {
                int d = number % 10;
                decimal = decimal + (d * pow(8, i));
                number /= 10;
            }
            cout << "The decimal number = " << decimal;
        }
        else if (window == 12)
        {
            cout << "\t\t\"Permutations\"\n";
            int n, r, P;
            cout << "Enter n : ";
            cin >> n;
            cout << "Enter r : ";
            cin >> r;
            if (n >= r)
            {
                P = (fact(n) / (fact(n - r)));
                cout << "The result = " << P;
            }
            else
                cout << "ERROR\n";
        }
        else if (window == 13)
        {
            cout << "\t\t\"Combinations\"\n";
            int n, r, C;
            cout << "Enter n : ";
            cin >> n;
            cout << "Enter r : ";
            cin >> r;
            if (n >= r)
            {
                C = (fact(n) / (fact(r) * fact(n - r)));
                cout << "The result = " << C;
            }
            else
                cout << "ERROR\n";
        }
        else if (window == 14)
        {
            cout << "\t\t\"Dec to Bin,Oct,Hex\"\n";
            double number, oc, hx;
            double new_number[6]{0}, new_number2[6]{0}, new_number3[14]{0};
            cout << "Enter number : ";
            cin >> number;
            int u = 0;
            oc = number;
            hx = number;
            int bn = number;
            while (oc >= 1)
            {
                oc = oc / 8;
                new_number[u] = (oc - trunc(oc)) * 8;
                oc = trunc(oc);
                u++;
            }
            int j = 0;
            while (hx >= 1)
            {
                hx = hx / 16;
                new_number2[j] = (hx - trunc(hx)) * 16;
                hx = trunc(hx);
                j++;
            }
            int k = 0;
            while (bn >= 1)
            {
                if (bn % 2 == 0)
                    new_number3[k] = 0;
                else
                    new_number3[k] = 1;
                bn /= 2;
                k++;
            }
            cout << "Octal number : ";
            for (int i = u - 1; i >= 0; i--)
            {
                cout << new_number[i];
            }
            cout << "\nHexadecimal number : ";
            for (int i = j - 1; i >= 0; i--)
            {
                if (new_number2[i] == 10)
                    cout << "A";
                if (new_number2[i] == 11)
                    cout << "B";
                if (new_number2[i] == 12)
                    cout << "C";
                if (new_number2[i] == 13)
                    cout << "D";
                if (new_number2[i] == 14)
                    cout << "E";
                if (new_number2[i] == 15)
                    cout << "F";
                if (new_number2[i] < 10)
                    cout << new_number2[i];
            }
            cout << "\nBinary number : ";
            for (int i = k - 1; i >= 0; i--)
            {
                cout << new_number3[i];
            }
        }
        else
        {
            cout << " This Window is not exist,Please Try again :)";
        }
        cout << "\n--------------------------------------------------------------\n";
        cout << "Enter the window : ";
        cin >> window;
    }
    return 0;
}
