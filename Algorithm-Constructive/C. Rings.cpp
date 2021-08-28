/*
    Author: Aminul Islam.
    Email: iaminul237@gmail.com
    Facebook: www.facebook.com/aminul.islam116
    Department: mathematics
    Institution: Shahjalal university of science and technology, Sylhet.
    Bangladesh.
*/
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define sll signed long long
#define I() ( { int a ; read(a) ; a; } )
#define L() ( { ll a ; read(a) ; a; } )
#define D() ({double a; scanf("%lf", &a); a;})
#define UL() ( { ull a; read(a); a; } )
#define SL() ( { sll a; read(a); a; } )
#define getString() ({ string s; cin >> s; s;})
#define mapLL map<ll, ll>
#define mapSL map<string, ll>
#define mapLLIt mapLL::iterator
#define mapSLIt mapSL::iterator

#define rep(n) for(ll i = 0; i < n; i++)
#define repMapLL(mp) for(mapLLIt it = mp.begin(); it != mp.end(); it++)
#define repMapSL(mp) for(mapSLIt it = mp.begin(); it != mp.end(); it++)

#define print1(a) (printf("%I64d ", a))
#define print1ln(a) (printf("%I64d\n", a))
#define print2(a, b) (printf("%I64d %I64d ", a, b))
#define print2ln(a, b) (printf("%I64d %I64d\n", a, b))
#define print3ln(a, b, c) (printf("%I64d %I64d %I64d\n", a, b, c))
#define newLine (printf("\n"))

#define mod 1000000007
#define MAX 300005

template<class T>inline bool read(T &x){
    int c=getchar();int sgn=1;
    while(~c&&c<'0'|c>'9'){if(c=='-')sgn=-1;c=getchar();}
    for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0';
    x*=sgn; return ~c;
}
using namespace std;

string s;

ll getPower(ll x, ll p){
    ll power = x;
    if(x == 0) return 0;
    if(p == 0) return 1;

    for(ll i = 2; i <= p; i++){
        power *= x;
    }
    return power;

}
///---------------------endOfSnippet----------------|o|

int getRightInd(int mid){
    int len = s.length();
    for(int i = mid + 1; i < len; i++){
        if(s[i] == '0') return i;
    }
    return -1;
}
int getLeftInd(int mid){
    int len = s.length();
    for(int i = 0; i < mid; i++){
        if(s[i] == '0') return i;
    }
    return -1;
}
int main(){

    int t = I();
    while(t--){
        int n = I(), leftZeroInd = -1, rightZeroInd = -1, mid = (n/2) - 1;
        s = getString();
        bool isAllOne = true;
        for(int i = 0; i < n; i++){
            if(s[i] != '1'){
                isAllOne = false;
            }
            if(i <= mid && leftZeroInd == -1 && s[i] == '0') leftZeroInd = i;
            if(i > mid && rightZeroInd == -1 && s[i] == '0') rightZeroInd = i;
        }
        if(isAllOne) printf("1 %d 2 %d\n", n - 1, n);
        else{
            if(leftZeroInd != -1){
                printf("%d %d %d %d\n", leftZeroInd + 1, n, leftZeroInd + 2, n);
            }
            else if(rightZeroInd != -1){
                printf("1 %d 1 %d\n", rightZeroInd + 1, rightZeroInd);
            }

        }
    }



    return 0;
}
