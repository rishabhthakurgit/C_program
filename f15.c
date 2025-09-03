#include <iostream> // Use correct header
using namespace std;
int main() {
    int a, b, temp;
    a = 5;
    b = 8;
    temp = a;
    a = b;
    b = temp;
    cout << "Values after swapping: " << a << " and " << b << endl; // Improved output
    return 0; // Fixed return statement
}