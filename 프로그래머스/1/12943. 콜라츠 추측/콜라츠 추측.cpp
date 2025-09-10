#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = num;
    if(n == 1) return answer;
    while(answer < 500) {
        answer++;
        if((n % 2) == 0) {
            n /= 2;
            if(n == 1) return answer;
        }
        else {
            n = n * 3 + 1;
        }
    }
    answer = -1;
    return answer;
}