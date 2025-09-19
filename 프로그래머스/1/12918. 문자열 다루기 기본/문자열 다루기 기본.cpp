#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(string s) {
    if(s.size() > 6 || s.size() < 4 || s.size() == 5) {
        return false;
    }
    sort(s.begin(), s.end());
    try{
        stoi(string(1, s.back()));
        return true;
    }
    catch(const invalid_argument& e){
        return false;
    }
}