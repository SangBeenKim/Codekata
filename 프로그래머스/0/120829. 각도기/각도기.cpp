#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 0;
    answer = angle == 180 ? 4 : angle > 90 ? 3 : angle == 90 ? 2 : 1;
    return answer;
}