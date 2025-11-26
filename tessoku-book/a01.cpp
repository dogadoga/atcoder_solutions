#include <bits/stdc++.h>
using namespace std;

// 型定義
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

// 定数
constexpr ll INF = 1e18;
constexpr int iINF = 1e9;
constexpr double eps = 1e-9;
constexpr double PI = 3.14159265358979323846;
constexpr int mod1 = 998244353;
constexpr int mod2 = 1000000007;

// マクロ
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rep_s(i,s,n) for(int i = (s); i < (int)(n); i++)
#define rep_r(i,n) for(int i = (int)(n)-1; i >= 0; i--)
#define rep_rs(i,s,e) for(int i = (int)(s)-1; i >= (int)(e); i--)
#define rep_b(bit,n) for(int bit = 0; bit < (1<<(n)); bit++)
#define enum_bit(i) if(bit & (1<<(i)))
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(v) ((ll)(v).size())
#define pb push_back
#define fi first
#define se second
#define endl "\n"

// 便利関数
template<class T> bool chmin(T& a, const T& b) { if(a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T& a, const T& b) { if(a < b) { a = b; return true; } return false; }

// AtCoder Library (ローカルで使う場合はパス設定が必要)
// #include <atcoder/all>
// using namespace atcoder;
// #define mint modint998244353
// #define mint2 modint1000000007

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // ---- solve ----
  ll n;
  cin >> n;
  cout << n*n << endl;
  return 0;
}
