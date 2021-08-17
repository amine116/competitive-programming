#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100001] = {}, b[100001] = {} ;
int main(){
    ll n; cin >> n;
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    sort(a, a + n); sort(b, b + n);
    ll size1 = n, size2 = n, scoreOfA = 0, scoreOfB = 0;
    bool A = true;
    ll maxOfA = a[size1 - 1], maxOfB = b[size2 - 1];
    ///cout << maxOfA << " " << maxOfB << endl;
    while(size1 > 0 || size2 > 0){

        if(A){
            if(size1 == 0){
                size2--;
            }
            else if(maxOfA > maxOfB){
                scoreOfA += maxOfA;
                size1--;
            }
            else if(maxOfA < maxOfB){
                size2--;
            }
            else if(maxOfA == maxOfB){
                scoreOfA += maxOfA;
                size1--;
            }

            A = false;
        }
        else {
            if(size2 == 0){
                size1--;
            }
            else if(maxOfB > maxOfA){
                scoreOfB += maxOfB;
                size2--;
            }
            else if(maxOfB < maxOfA){
                size1--;
            }
            else if(maxOfA == maxOfB){
                scoreOfB += maxOfB;
                size2--;
            }
            A = true;
        }
        maxOfA = a[size1 - 1]; maxOfB = b[size2 - 1];
        ///cout << maxOfA << " " << maxOfB << " " << scoreOfA << " " << scoreOfB << endl;
    }

    printf("%I64d\n", scoreOfA - scoreOfB);
    return 0;
}
