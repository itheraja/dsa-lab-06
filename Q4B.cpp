#include <iostream>
using namespace std;

void second(int n, int sum);

void first(int n, int sum) {
    if (n > 7)
        return;

    sum += n;
    cout << sum << " ";
    second(n + 1, sum);
}

void second(int n, int sum) {
    if (n > 7)
        return;

    sum += n;
    cout << sum << " ";
    first(n + 1, sum);
}

int main() {
    first(1, 0);
    cout << endl;
    return 0;
}
