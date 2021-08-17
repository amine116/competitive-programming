#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t; cin >> t;
    while(t--){
        string s; cin >> s; ll len = s.length();
        ll up = 0, low = 0, dig = 0, dec = 0;
        for(ll i = 0; i < len; i++){
            if(s[i] >= 'a' && s[i] <= 'z') low++;
            else if(s[i] >= 'A' && s[i] <= 'Z') up++;
            else if(s[i] >= '0' && s[i] <= '9') dig++;
        }
        if(up > 0 && low > 0 && dig > 0){
            cout << s << endl;
        }
        else {
            if(up == 0){
                if(low > 1){
                    for(ll i = 0; i < len; i++) if(s[i] >= 'a' && s[i] <= 'z') {s[i] = 'A'; low--; break;}
                }
                else if(dig > 1){
                    for(ll i = 0; i < len; i++) if(s[i] >= '0' && s[i] <= '9'){s[i] = 'A';dig--; break;}
                }
            }

            if(low == 0){
                if(up > 1){
                    for(ll i = 0; i < len; i++) if(s[i] >= 'A' && s[i] <= 'Z'){s[i] = 'a';up--; break;}
                }
                else if(dig > 1){
                    for(ll i = 0; i < len; i++) if(s[i] >= '0' && s[i] <= '9'){s[i] = 'a';dig--; break;}
                }
            }
            if(dig == 0){
                if(low > 1){
                    for(ll i = 0; i < len; i++) if(s[i] >= 'a' && s[i] <= 'z') {s[i] = '1';low--; break; }
                }
                else if(up > 1){
                    for(ll i = 0; i < len; i++) if(s[i] >= 'A' && s[i] <= 'Z'){s[i] = '1';up--; break;}
                }
            }
            dec = 1;
        }
        if(dec == 1)
            cout << s << endl;
    }
    return 0;
}
