#include <iostream>

using namespace std;

bool isPowerOfFour(int n) {
    if (n == 4 || n == 1) {
        return true;
    }

    if (n % 4 != 0 || n == 0) {
        return false;
    }

    return isPowerOfFour(n / 4);
}

int main()
{
    cout << isPowerOfFour(16) << endl;

    return 0;
}