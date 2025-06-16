#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;


vector<string> split(const string& str, char delim) {
    vector<string> result;
    stringstream ss(str);
    string token;

    while (getline(ss, token, delim)) {
        result.push_back(token);
    }

    return result;
}


int sumOfString(const string& str) {
    vector<string> numbers = split(str, '+');
    int total = 0;
    for (const string& num : numbers) {
        total += stoi(num);
    }
    return total;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string expression;
    cin >> expression;


    vector<string> parts = split(expression, '-');

   
    int result = sumOfString(parts[0]);

  
    for (size_t i = 1; i < parts.size(); ++i) {
        result -= sumOfString(parts[i]);
    }

    cout << result << endl;

    return 0;
}
