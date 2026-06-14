//print fibonacci series using recursion and find the sum of the series
#include <iostream>
using namespace std;


int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int term = fibonacci(i);
        cout << term << " ";
        sum += term;
    }
    cout << "\nSum of the series: " << sum << endl;

    return 0;
}