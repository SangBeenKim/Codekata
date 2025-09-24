#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int power = -1;
    int num = n;
    
    while(num != 0) {
        num /= 3;
        power++;
    }
    
    while(n != 0) {
        answer += n % 3 * pow(3, power);
        n /= 3;
        power--;
    }
    
    return answer;
}