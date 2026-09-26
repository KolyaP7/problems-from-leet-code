#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        bool flag = true;
        for (size_t i = 0; i < strs[0].size(); i++){
            for (size_t j = 0; j < strs.size(); j++){
                if (j == 0){
                    continue;
                }
                if (i > strs[j].size()){
                    flag = false;
                    break;
                }
                if (strs[j][i] != strs[0][i]){
                    flag = false;
                    break;
                } 
            }
            if (flag == true){
                result += strs[0][i];
            }
        }
        return result;
    }
};

int main(){
    vector<string> strs = {"flower","flow","flight"};
    cout << Solution().longestCommonPrefix(strs) << endl;
    return 0;
}