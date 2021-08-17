/*
    Author: Aminul Islam.
    Email: iaminul237@gmail.com
    Facebook: www.facebook.com/aminul.islam116
    Department: mathematics
    Institution: Shahjalal university of science and technology, Sylhet.
    Bangladesh.
*/
#include<bits/stdc++.h>
#include<fstream>
#define ll long long
#define ull unsigned long long
#define sll signed long long
#define I() ( { int a ; read(a) ; a; } )
#define L() ( { ll a ; read(a) ; a; } )
#define D() ({double a; scanf("%lf", &a); a;})
#define UL() ( { ull a; read(a); a; } )
#define SL() ( { sll a; read(a); a; } )
#define MAX 200002

template<class T>inline bool read(T &x){
    int c=getchar();int sgn=1;
    while(~c&&c<'0'|c>'9'){if(c=='-')sgn=-1;c=getchar();}
    for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0';
    x*=sgn; return ~c;
}
using namespace std;
int main(){
    ll n = L(), d = L();
    ll firstPoints[n+1], lastPoints[n+1];
    for(ll i = 0; i < n; i++) firstPoints[i] = L();
    for(ll i = 0; i < n; i++) lastPoints[i] = L();

    ll pos = 0, c = n - 1;
    for(ll i = 0; i < n; i++) {
        if(firstPoints[d - 1] + lastPoints[0] < firstPoints[i] + lastPoints[c]) pos++, c = n - 1;
        else c--;
    }

    printf("%I64d\n", pos + 1);
    return 0;
}
