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
	ll n = L(), arr[n + 1], count = 0;
	for(ll i = 0; i < n; i++) arr[i] = L();
	bool canRemove[n + 1]; memset(canRemove, false, sizeof(canRemove));
	for(ll i = 1; i < n - 1; i++){
		if(arr[i - 1] + 1 == arr[i] && arr[i] + 1 == arr[i + 1]) canRemove[i] = true;
	}
	if(arr[0] == 1 && arr[1] == 2 && n > 1) canRemove[0] = true;
	if(arr[n - 1] == 1000 && arr[n - 2] == 999 && n > 1) canRemove[n - 1] = true;

	ll state = -1, temp = 0, maxx = 0;
	for(ll i = 0; i <= n; i++)
	{
		if(canRemove[i])
		{
			if(state == -1) state = i;
			temp++;
		}
		else
		{
			maxx= max(maxx,temp);
			temp = 0;
			state = -1;
		}
	}

	print1ln(maxx);
	
    
	return 0;
}