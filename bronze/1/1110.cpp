#include <iostream>
using namespace std;
int main() {
    int f;
    int a;
    int c = 0;
    cin >> a;
    f = a;
    while (1) {
        a = ((a%10)*10)+(((a / 10) + (a % 10))%10);
        c++;
        if (a == f) {
            break;
        }
    }
    cout << c;
}