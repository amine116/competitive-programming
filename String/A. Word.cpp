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
void printRes(string s, int up, int low){
    if(up > low){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s;
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;
    }
}
int main(){

    string s = getString();
    int up = 0, low = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') up++;
        else low++;
    }

    printRes(s, up, low);

    return 0;
}
