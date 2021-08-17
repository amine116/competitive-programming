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
#define D() ({double a; scanf("%lf", &a); a;})  ///Accepted
#define UL() ( { ull a; read(a); a; } )
#define SL() ( { sll a; read(a); a; } )
#define rep(n) for(ll i = 0; i < n; i++)

#define print1(a) (printf("%I64d ", a))
#define print1ln(a) (printf("%I64d\n", a))
#define print2(a, b) (printf("%I64d %I64d ", a, b))
#define print2ln(a, b) (printf("%I64d %I64d\n", a, b))
#define print3ln(a, b, c) (printf("%I64d %I64d %I64d\n", a, b, c))

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
	ll n = L(), indToDel = 0;
	string s; cin >> s;
	for(ll i = 0; i < n - 1; i++) if(s[i] > s[i + 1]){
		 indToDel = i;
		 break;
	}
	if(indToDel == 0 && s[0] <= s[1]) indToDel = n - 1;
	for(ll i = 0; i < n; i++) if(i != indToDel) cout << s[i];
	printf("\n");
	return 0;
}