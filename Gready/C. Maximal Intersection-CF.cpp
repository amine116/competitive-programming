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

///Printing Methods
#define print1(a) (printf("%I64d ", a))
#define print1ln(a) (printf("%I64d\n", a))
#define print2(a, b) (printf("%I64d %I64d ", a, b))
#define print2ln(a, b) (printf("%I64d %I64d\n", a, b))
#define print3ln(a, b, c) (printf("%I64d %I64d %I64d\n", a, b, c))

#define MAX 300005

template<class T>inline bool read(T &x){
    int c=getchar();int sgn=1;
    while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=getchar();}
    for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0'; 
    x*=sgn; return ~c;
}
using namespace std;
int main(){	
	ll n = L(); ll x[n + 1], y[n + 1]; multiset<ll> xx, yy;
	for(ll i = 0; i < n; i++){
		x[i] = L(); y[i] = L();
		xx.insert(x[i]); yy.insert(y[i]);
	}

	ll result = 0;
	for(ll i = 0; i < n; i++){
		xx.erase(xx.find(x[i])); yy.erase(yy.find(y[i]));


		result = max(result, (*yy.begin()) - (*--xx.end()));

		xx.insert(x[i]); yy.insert(y[i]);
	}
	print1ln(result);
    
	return 0;
}
