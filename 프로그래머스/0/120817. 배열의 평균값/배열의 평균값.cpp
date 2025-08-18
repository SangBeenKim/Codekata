#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double sum = 0;
    double answer = 0;
    for(int num : numbers) {
        sum += num;
    }
    answer = sum / numbers.size();
    return answer;
}