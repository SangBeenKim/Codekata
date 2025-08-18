#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    float quotient = (float) num1 / num2;
    int answer = quotient * 1000;
    return answer;
}