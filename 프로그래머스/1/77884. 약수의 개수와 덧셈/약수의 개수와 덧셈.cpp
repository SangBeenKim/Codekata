#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = (right - left + 1) * (right + left) / 2;
    int factor = 0;
    int odd = 0;
    
    if(left < right) {
        for(left; left <= right; left++) {
            factor = 0;
            for(int i = 1; i <= left; i++) {
                if(left % i == 0) {
                    factor++;
                }
            }
            if(factor % 2) {
                odd += left;
            }
        }
    }
    
    else {
        for(int i = 1; i <= left; i++) {
            if(left % i == 0) {
                factor++;
            }
        }
        if(factor % 2) { return 0; }
        else { return answer *= 2; }
    }
    
    return answer -= odd * 2;
}