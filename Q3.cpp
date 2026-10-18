#include <iostream>
using namespace std;

void second(int n);

void first(int n) {
    if (n > 15)
        return;

    cout << n << " ";
    second(n + 1);
}

void second(int n) {
    if (n > 15)
        return;

    cout << n << " ";
    first(n + 1);
}

int main() {
    first(1);
    cout << endl;
    return 0;
}
