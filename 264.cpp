#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    bool isUglyNumber(int num) {
        if (num <= 0) return false;
        while (num % 2 == 0) num /= 2;
        while (num % 3 == 0) num /= 3;
        while (num % 5 == 0) num /= 5;
        return num == 1;
    }

public:
    int nthUglyNumber(int n) {
        int count = 0;
        int i = 1;
        while (true) {
            if (isUglyNumber(i)) {
                count++;
                if (count == n) return i;
            }
            i++;
        }
    }
};

int main() {
    cout << Solution().nthUglyNumber(10) << endl;
    return 0;
}
