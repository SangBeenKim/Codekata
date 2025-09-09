#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    double num;
    if(a == b) return answer = a;
    if(a > b) {
        num = static_cast<double>((a + 1) - b) / 2;
        return answer = num * (a + b);
    }
    if(a < b) {
        num = static_cast<double>((b + 1) - a) / 2;
        return answer = num * (a + b);
    }
}