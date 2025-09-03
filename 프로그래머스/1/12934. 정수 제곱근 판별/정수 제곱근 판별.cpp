#include <string>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    double num = sqrt(n);
    if(fmod(num, 1.0) == 0) {
        num++;
        answer = pow(num, 2);
    }
    else answer = -1;
    return answer;
}