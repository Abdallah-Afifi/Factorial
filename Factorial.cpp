#include <iostream>
#define ull unsigned long long
using namespace std;

int x = 0;

bool isFactorial(ull n)
{
    if (n > 1) {
        for (int i = 1;; i++) {
            if (n % i == 0) {
                n /= i;
                x = i;
            }
            else {
                break;
            }
        }

        if (n == 1) {
            return true;
        }
        else {
            return false;
        }
    }
    else if (n == 1) {
        return true;
    }
    else return false;
}


int main()
{
    ull n;
    cin >> n;
    bool ans = isFactorial(n);
    if (ans == 1) {
        cout << "Factorial\n";
        cout << x;
    }
    else {
        cout << "Not\n";
    }

    return 0;
}
