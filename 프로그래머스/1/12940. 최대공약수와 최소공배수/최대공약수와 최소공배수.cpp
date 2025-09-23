#include <string>
#include <vector>

using namespace std;

int GCDFunction(int n, int m) {
    if(n == 0)
        return m;
    else
        return GCDFunction(m % n, n);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int GCD = 0;
    int LCM = 0;
    
    if(n <= m) {
        GCD = GCDFunction(n, m);
        LCM = n * m / GCD;
    }
    else {
        GCD = GCDFunction(m, n);
        LCM = n * m / GCD;
    }
    
    answer.push_back(GCD);
    answer.push_back(LCM);
    return answer;
}