#include<iostream> 
using namespace std;

int main()
{
    int k, i = 1, sum_k = 0, number;
    cout << "Enter the amount of integers to sum = ";

    while (!(cin >> k))
    {
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
        cout << "Incorrect input!\n Input number = ";
    }

    do {
        if (k == 0) {
            cout << "INPUT 0" << endl;
            break;
        }

        cout << "Enter integer nr. " << i << ": ";
        while (!(cin >> number))
        {
            cin.clear();
            cin.ignore(cin.rdbuf()->in_avail());
            cout << "Incorrect input!\n";
            cout << "Enter integer nr. " << i << ": ";
        }
        sum_k += number;
        i++;
    } while (i <= k);

    cout << "The total sum of " << k << " integers is: " << sum_k;
    return 0;
}
