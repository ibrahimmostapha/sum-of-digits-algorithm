#include <iostream>
using namespace std;

int digitalRoot(int n) {
    if (n%9 == 0)
    {
        return 9;
    }else
    {
        return n%9;
    }
}
 
int main() {
    int n, sum, num;
    sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    num = n;
    sum = digitalRoot(n);
    cout << "The sum of the digits of " << num << " is: " << sum << endl;
    return 0;
}
