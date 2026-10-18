#include <iostream>
#include <string>
using namespace std;

void permutations(string s, int index) {
    if (index == s.length()) {
        cout << s << " ";
        return;
    }

    for (int i = index; i < s.length(); i++) {
        swap(s[index], s[i]);
        permutations(s, index + 1);
        swap(s[index], s[i]);
    }
}

int main() {
    int n;
    cin >> n;

    string s = "";
    for (int i = 0; i < n; i++) {
        s += char('a' + i);
    }

    permutations(s, 0);
    cout << endl;
    return 0;
}
