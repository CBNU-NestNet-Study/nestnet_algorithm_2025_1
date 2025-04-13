#include <iostream>
#include <string>
using namespace std;

int main() {
    string expr;
    cin >> expr;

    string num = "";
    int result = 0;
    bool minusFound = false;

    for (int i = 0; i <= expr.size(); ++i) {
        if (i == expr.size() || expr[i] == '+' || expr[i] == '-') {
            int n = stoi(num); 
            if (minusFound) {
                result -= n;
            } else {
                result += n;
            }

            if (i < expr.size() && expr[i] == '-') {
                minusFound = true;
            }

            num = "";
        } else {
            num += expr[i]; 
        }
    }

    cout << result << endl;
    return 0;
}
