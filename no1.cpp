#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LINF = 1e18;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main(){
    int N, L, K;
    ll A[100010];

    cin >> N >> L;
    cin >> K;
    rep(i,N){
        cin >> A[i];
    }

    //bunary_search
    ll left = -1;
    ll right = L + 1; 

    while(right - left > 1){
        ll mid = left + (right - left) / 2;

        ll cnt=0, pre = 0;
        for(int i=0; i <= N; i++){
            if (A[i] - pre >= mid && L - A[i] >= mid){ // 左から長さに達したら切る,この時右に十分な長さがあることも確認する
                cnt += 1;
                pre = A[i];
            }
        }
        if(cnt >= K){
                left = mid;
            }
            else{
                right = mid;
            }
        //cout << mid << left << endl;
    }
    cout << left << endl;
    return 0;
}