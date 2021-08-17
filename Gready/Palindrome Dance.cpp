#include<bits/stdc++.h>
#define ll long long
using namespace std;
int isPall(vector<int>arr, int n){
    int mid;
    if(n%2 == 0)mid = n/2 - 1;
    else mid = n/2;
    for(int i = 0, j = n - 1; i <= mid; i++, j--){
        if(arr[i] != arr[j])return 0;
    }
    return 1;
}
int main(){
    int n, a, b, cost1 = 0, cost2 = 0, pal1 = 0, pal2 = 0, cost = 0; cin >> n >> a >> b;
    vector<int>arr; for(int i = 0; i < n; i++) {int temp; cin >> temp; arr.push_back(temp);}

    vector<int>arr2; arr2 = arr;

    ll mid; if(n%2 == 0) mid = n/2 - 1; else mid = n/2;
    for(int i = 0, j = n - 1; i <= mid; ){
        if(arr[i] != arr[j]){
            if(arr[i] == 0 && arr[j] == 2) {arr[j] = 0; cost1 += a; i++; j--;}
            else if(arr[i] == 1 && arr[j] == 2) {arr[j] = 1; cost1 += b; i++; j--;}
            else if(arr[i] == 2){
                if(arr[j] == 1){arr[i] = 1; cost1 += b; i++; j--;}
                else if(arr[j] == 0) {arr[i] = 0; cost1 += a; i++; j--;}
                ///else {arr[i] = 1; arr[j] = 1; cost1 += 2*b; i++; j--;}
            }
            else {i++; j--;}
        }
        else if(i == j && arr[i] == 2){arr[i] = 1; cost1 += b; i++; j--;}
        else if(arr[i] == 2 && arr[j] == 2){arr[i] = 1; arr[j] = 1; cost1 += 2*b; i++; j--;}
        else {i++; j--;}
    }
    ///for(int i = 0; i < arr.size(); i++) cout << arr[i] << " "; printf("\n");
    if(isPall(arr, n)) pal1 = 1;

    for(int i = 0, j = n - 1; i <= mid; ){
        if(arr2[i] != arr2[j]){
            if(arr2[i] == 0 && arr2[j] == 2) {arr2[j] = 0; cost2 += a; i++; j--;}
            else if(arr2[i] == 1 && arr2[j] == 2) {arr2[j] = 1; cost2 += b; i++; j--;}
            else if(arr2[i] == 2){
                if(arr2[j] == 1){arr2[i] = 1; cost2 += b; i++; j--;}
                else if(arr2[j] == 0) {arr2[i] = 0; cost2 += a; i++; j--;}
                ///else {arr2[i] = 0; arr2[j] = 0; cost2 += 2*a; i++; j--;}
            }
            else {i++; j--;}
        }
        else if(i == j && arr2[i] == 2) {arr2[i] = 0; cost2 += a; i++; j--;}
        else if(arr2[i] == 2 && arr2[j] == 2){arr2[i] = 0; arr2[j] = 0; cost2 += 2*a; i++; j--;}
        else {i++; j--;}
    }
    ///for(int i = 0; i < arr2.size(); i++) cout << arr2[i] << " "; printf("\n");
    if(isPall(arr2, n)) pal2 = 1;

    if(pal1 == 1 && pal2 == 1) printf("%d\n", min(cost1, cost2));
    else if(pal1 == 0 && pal2 == 0)printf("-1\n");
    else if(pal1 == 1)printf("%d\n", cost1);
    else if(pal2 == 1)printf("%d\n", cost2);
    return 0;
}
