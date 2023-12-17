#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    // 문자열들 -> 문자열
    for(int i = 0; i < intStrs.size(); i++)
    {
        int num = stoi(intStrs[i].substr(s,l));
        if(num > k)
        {
            answer.push_back(num);
        }
        // 다음 코드는 vector<string>에 접근하기 때문에 오류가 발생한다.
        // answer = stoi(intStrs.substr(k,k+l));
    }    
    return answer;
}