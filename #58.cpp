#include <iostream>
using namespace std;

int main(){
    string s = "Hello World";
    string cur_str = "";
        for (int i = 0; i < s.size(); i++){
            if (s.at(i) == ' '){
                cur_str = "";
            } else {
                cur_str += s[i];
            }
        }
    cout << cur_str.size() << endl;
    return 0;
}