#include <iostream>
using namespace std;

int sumDigits(int n) {
    int sum = 0;
    int m;
    while (n > 0) {
        m = n % 10;    
        sum = sum + m;    
        n = n / 10;  
    }
    return sum;
}
 
int main() {
    int n, sum, num;
    sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    num = n;
    sum = sumDigits(n);
    cout << "The sum of the digits of " << num << " is: " << sum << endl;
    return 0;
}
