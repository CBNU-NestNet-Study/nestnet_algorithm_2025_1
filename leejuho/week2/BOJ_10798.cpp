#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<string> words(5);

    
    for (int i = 0; i < 5; i++) {
        cin >> words[i];
    }

    
    for (int col = 0; col < 15; col++) {
        for (int row = 0; row < 5; row++) {
            
            if (col < words[row].size()) {
                cout << words[row][col];
            }
        }
    }

    return 0;
}
