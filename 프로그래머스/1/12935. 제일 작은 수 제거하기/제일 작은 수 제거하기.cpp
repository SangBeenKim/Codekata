#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = {-1};
    if(answer.size() != arr.size()) {
        answer = arr;
        sort(arr.rbegin(),arr.rend());
        for(auto it = answer.begin(); it != answer.end();) {
            if(*it == arr.back()) {
                it = answer.erase(it);
            }
            else ++it;
        }
    }
    return answer;
}