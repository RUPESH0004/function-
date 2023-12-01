#include <iostream>
using namespace std;
int fib(int n)
{
    int a = 0, b = 1;
    cout << a << " ";
    cout << b << " ";
    for (int i = 3; i <= n; i++)
    {
        int ans = a + b;
        cout << ans <<" ";
        a = b;
        b = ans;
    }
}
int main()
{
    int n;
    cout << "Enter the no you want fibonacchi" << endl;
    cin >> n;
    fib(n);
}