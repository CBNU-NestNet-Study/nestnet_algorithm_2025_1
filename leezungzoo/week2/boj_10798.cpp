#include <iostream>
#include <string>
using namespace std;

int main() {
    string board[5];

    for (int i = 0; i < 5; i++) {
        cin >> board[i];
    }

    string result = "";

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < board[j].size()) {
                result += board[j][i];
            }
        }
    }

    cout << result << endl;

    return 0;
}
