#include <iostream>
using namespace std;
void addition(int n1, int n2)
{
    int ans = n1 + n2;
    cout << "The addition of two no is :-" << ans << endl;
}
void subtraction(int n1, int n2)
{
    int ans = n1 - n2;
    cout << "The subtraction of two no is :-" << ans << endl;
}
void multiplication(int n1, int n2)
{
    int ans = n1 * n2;
    cout << "The multiplication of two no is :-" << ans << endl;
}
void divide(int n1, int n2)
{
    int ans = n1 / n2;
    cout << "The divide of two no is :-" << ans << endl;
}
int main()
{
    int n1, n2;
    cout << "Please Enter two number" << endl;
    cin >> n1;
    cin >> n2;
    addition(n1, n2);
    subtraction(n1, n2);
    multiplication(n1, n2);
    divide(n1, n2);
}