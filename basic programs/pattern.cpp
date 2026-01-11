#include <iostream>
using namespace std;
class Solution {
  public:
    void printPattern(int n) {
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                cout << "* " << endl;
                continue;
            }
            if (i == n) {
                for (int j = 0; j < n; j++) {
                    cout << "* ";
                }
                cout << endl;
                continue;
            }
            cout << "* ";
            for (int j = 2; j < i; j++) {
                cout << "  ";
            }
            cout << "* " << endl;
        }
    }
};


main(){
    Solution s;
    int n;
    cin >> n;
    s.printPattern(n);
    return 0;
}