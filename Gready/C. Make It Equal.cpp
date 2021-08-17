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
#define MAX 300005

template<class T>inline bool read(T &x){
    int c=getchar();int sgn=1;
    while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=getchar();}
    for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0'; 
    x*=sgn; return ~c;
}
using namespace std;
map<ll, ll>mp;
int main()
{	
	ll n = L(), k = L(); ll arr[n + 1], mx = -1, mn = 2000000, sum = 0;
	for(ll i = 0; i < n; i++){
		arr[i] = L();
		mp[arr[i]]++;
		mx = max(mx, arr[i]);
		mn = min(mn, arr[i]);
	}
	
	map<ll, ll>::iterator it;
	for(it = mp.begin(); it != mp.end(); it++){
		sum += it->second;
	}

	ll rowWiseElement[mx + 2];
	it = mp.begin();
	for(ll i = 1; i <= mx; i++){
		if(i == 1) rowWiseElement[i] = sum;
		else {
			rowWiseElement[i] = rowWiseElement[i - 1] - mp[i - 1];
		}
	}
	//for(ll i = 1; i <= mx; i++) cout << rowWiseElement[i] << " ";

	ll countOfSlice = 0; sum = 0;
	for(ll i = mx; i > mn; ){
		while(sum + rowWiseElement[i] <= k && i > mn){
			sum += rowWiseElement[i];
			i--;
		}
		countOfSlice++;
		sum = 0;
	}
	cout << countOfSlice << endl;
	return 0;
}