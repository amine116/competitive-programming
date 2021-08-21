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
#define MAX 200004

template<class T>inline bool read(T &x){
    int c=getchar();int sgn=1;
    while(~c&&c<'0'|c>'9'){if(c=='-')sgn=-1;c=getchar();}
    for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0';
    x*=sgn; return ~c;
}
using namespace std;
int lowsA[MAX];

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

ll nextSquare(ll ai){
    ll sr = sqrt(ai);
    return (sr + 1)*(sr + 1);
}
ll prevSquare(ll ai){
    ll sr = sqrt(ai);
    return (sr*sr);
}

int main(){

    ll n = L(), perfect = 0, t = n, zero = 0;
    //vector<ll> lows;
    while(t--){
        ll ai = L(), sr = sqrt(ai);
        if(ai == 0) zero++;
        if(sr*sr == ai) perfect++;
        ll curLow = min(nextSquare(ai) - ai, ai - prevSquare(ai));
        lowsA[curLow]++;
    }
    ll cnt = 0;
    if(perfect*2 == n){
        print1ln(cnt);
    }
    else{
        if(perfect > n/2){
            ll to = perfect - n/2, nonZeroPerfect = perfect - zero;
            if(to <= nonZeroPerfect){
                //printf("%d\n", to);
                print1ln(to);
            }
            else{
                to -= nonZeroPerfect;
                while(to--) nonZeroPerfect += 2;
                //printf("%d\n", nonZeroPerfect);
                print1ln(nonZeroPerfect);
            }

        }
        else{
            ll to = n/2 - perfect;
            //print1ln(perfect);
            for(ll i = 1; i < MAX && to > 0; i++){
                //print1(i); print1ln(lowsA[i]);
                if(to < lowsA[i]){
                    cnt += to*i;
                    to = 0;
                }
                else{
                    cnt += lowsA[i]*i;
                    to -= lowsA[i];
                }

            }
            print1ln(cnt);
        }
    }

    //main();
    return 0;
}
