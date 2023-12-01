#include <iostream>
using namespace std;
// This function for fibonacchi serise
int fib(int n)
{
    int a = 0, b = 1;
    cout<<"the fibonacchi series is:-";
    cout << a << " ";
    cout << b << " ";
    for (int i = 3; i <= n; i++)
    {
        int ans = a + b;
        cout << ans << " ";
        a = b;
        b = ans;
    }
    cout << endl;
}
//This finction is for prinme no
void isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "The given no is Prime" << endl;
            break;
        }
        else
        {
            cout << "The given no is not prime no " << endl;
            break;
        }
        cout << endl;
    }
}
//This finction is fot counting no 
int PrintCounting(int n)
{
    cout <<"the counting is:- ";
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
//This finction is for factorial
int factorial(int n)
{
    cout <<"the factorial is :-";
    int fact = n;
    for (int i = 1; i < n; i++)
    {

        fact = fact * i;
    }

    cout << fact << " ";
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the no  " << endl;
    cin >> n;
    fib(n);
    isPrime(n);
    PrintCounting(n);
    factorial(n);
}