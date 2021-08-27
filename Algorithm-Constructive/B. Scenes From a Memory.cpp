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

bool isPrinted = false;

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

bool isPrime(char n){
    int d = n - '0';
    if(d == 1) return false;
    else if(d == 2) return true;
    else if(d == 3) return true;
    else if(d == 4) return false;
    else if(d == 5) return true;
    else if(d == 6) return false;
    else if(d == 7) return true;
    else if(d == 8) return false;
    else if(d == 9) return false;
}

bool isNumbPrime(int n){
    int r = sqrt(n) + 1;
    for(int i = 2; i <= r; i++){
        if(n%i == 0) return false;
    }
    return true;
}

void printSingle(char d){

    printf("1\n");
    printf("%c\n", d);
    isPrinted = true;
}

void printTwo(char d1, char d2){

    printf("2\n");
    printf("%c%c\n", d1, d2);
    isPrinted = true;
}

int makeTwoDigNumb(char l, char r){
    int _10 = l - '0', _1 = r - '0';
    return (10*_10) + _1;
}


int main(){

    int t = I();
    while(t--){
        int k = I();
        string digts = getString();
        vector<int> two, three, five, seven;
        isPrinted = false;

        for(int i = 0; i < k; i++){
            if(!isPrime(digts[i])){
                printSingle(digts[i]);
                break;
            }
            if(digts[i] == '2') two.push_back(i);
            else if(digts[i] == '3') three.push_back(i);
            else if(digts[i] == '5') five.push_back(i);
            else if(digts[i] == '7') seven.push_back(i);

        }
        if(!isPrinted){
            if(two.size() > 1) printTwo('2', '2');
            else if(three.size() > 1) printTwo('3', '3');
            else if(five.size() > 1) printTwo('5', '5');
            else if(seven.size() > 1) printTwo('7', '7');
        }
        if(!isPrinted){
            if(two.size() == 1 && two[0] > 0) printTwo(digts[0], '2');
            else if(five.size() == 1 && five[0] > 0) printTwo(digts[0], '5');
        }
        if(!isPrinted){
            if(k < 3){
                printTwo(digts[0], digts[1]);
            }
            else{
                if(!isNumbPrime(makeTwoDigNumb(digts[0], digts[1]))){
                    printTwo(digts[0], digts[1]);
                }
                else if(!isNumbPrime(makeTwoDigNumb(digts[0], digts[2]))){
                    printTwo(digts[0], digts[2]);
                }
                else if(!isNumbPrime(makeTwoDigNumb(digts[1], digts[2]))){
                    printTwo(digts[1], digts[2]);
                }
                else if(!isNumbPrime(makeTwoDigNumb(digts[1], digts[0]))){
                    printTwo(digts[1], digts[0]);
                }
                else if(!isNumbPrime(makeTwoDigNumb(digts[2], digts[0]))){
                    printTwo(digts[2], digts[0]);
                }
                else if(!isNumbPrime(makeTwoDigNumb(digts[2], digts[1]))){
                    printTwo(digts[2], digts[1]);
                }
            }
        }
    }
    return 0;
}
