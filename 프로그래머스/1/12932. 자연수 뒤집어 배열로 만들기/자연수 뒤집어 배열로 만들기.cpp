#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string num = to_string(n);
    int digits = num.length();
    while(digits > 0) {
        answer.push_back(stoi(num.substr(--digits,1)));
    }
    return answer;
}