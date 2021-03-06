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
#define rep(n) for(ll i = 0; i < n; i++)

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
    while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=getchar();}
    for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0'; 
    x*=sgn; return ~c;
}
using namespace std;
int main(){	
	ll n = L(), arr[n + 1];
	rep(n) arr[i] = L();
	ll count = 0;
	
	rep(n){
		if(arr[i] == 0 && i > 0){
			if(arr[i - 1] == 1 && arr[i + 1] == 1) count++, arr[i + 1] = 0;
		}
	}
	print1ln(count);
	
    
	return 0;
}