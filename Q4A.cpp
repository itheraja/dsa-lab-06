#include <iostream>
using namespace std;

void sequence(int n, int sum) {
    if (n > 7)
        return;

    sum += n;
    cout << sum << " ";
    sequence(n + 1, sum);
}

int main() {
    sequence(1, 0);
    cout << endl;
    return 0;
}
