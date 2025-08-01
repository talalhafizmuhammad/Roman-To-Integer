#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman = {
        {'I',1}, {'V',5}, {'X',10},
        {'L',50}, {'C',100}, {'D',500}, {'M',1000}
    };

    int total = 0, prev = 0;
    for(int i = s.size() - 1; i >= 0; --i) {
        int val = roman[s[i]];
        if(val < prev)
            total -= val;
        else {
            total += val;
            prev = val;
        }
    }
    return total;
}

int main() {
    string s = "MCMXCIV";
    cout << "Roman numeral: " << s << " → Integer: " << romanToInt(s) << endl;
    return 0;
}
