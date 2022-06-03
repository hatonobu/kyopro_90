#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LINF = 1e18;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

bool hantei(string S){
    int dep = 0;
    for(int i=0; i < S.size(); i++){
        if(S[i] == '(') dep += 1;
        if(S[i] == ')') dep -= 1;
        if(dep < 0) return false;
    }
    if(dep == 0) return true;
    return false;
}

int main(){
    int N;
    cin >> N;
    for(int i=0; i < (1 << N); i++){
        string Candidate = "";
        for (int j= N - 1; j >= 0; j--){
            if((i & (1 << j)) == 0){
                Candidate += "(";
            }
            else{
                Candidate += ")";
            }
            cout << "for2 :" << j << endl;
        }
        bool I = hantei(Candidate);
        if(I == true) cout << Candidate << endl;
        cout << "for1-----:" << i << endl;
    }
    return 0;
}