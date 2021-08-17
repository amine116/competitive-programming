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
ll getPowerOf10(ll pos){
    ll power10[14] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000,
                100000000000, 1000000000000, 10000000000000};
    return power10[pos];
}
ll makeLargestNumber(ll n){
    ll pos = 0, number = 0;
    while(n){
        number += 9*getPowerOf10(pos);
        pos++;
        n /= 10;
        if(n < 10) break;
    }
    number += n*getPowerOf10(pos);
    return number;
}
ll getSumOfDigit(ll n){
    ll sum = 0;
    while(n){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int main()
{

	ll n = L();
	if(n < 10){
        cout << n << endl;
	}
	else{
        ll temp = n/2;
        ll larg = makeLargestNumber(temp);
        ll small = n - larg;
        ///cout << small << " " << larg << endl;
        cout << getSumOfDigit(small) + getSumOfDigit(larg) << endl;
	}
	return 0;
}
