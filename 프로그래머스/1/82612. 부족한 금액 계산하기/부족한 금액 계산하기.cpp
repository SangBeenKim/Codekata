using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    double n = static_cast<double>(count) / 2;
    long long total_money = n * (2 * price + (count - 1) * price);
    
    answer = total_money - money;
    
    if(money >= total_money) return 0;
    
    return answer;
}