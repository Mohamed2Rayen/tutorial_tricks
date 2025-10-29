#include <bits/stdc++.h>
#define fin  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
using namespace std;
int main(){
    fin;
    ll cpt=0 , n;
    cin>>n;
    for (int i=1 ; n>=i*i ; i++){ // to check only for √n because (i*i<=n) == i<=√n
        if (n%i == 0){
            cpt++;
            if (n/i != i){ // count only the divisor and its pair , see the second file for explanation
                cpt++;
            }
            if (cpt>2){
                break;
            }
        }
    }
    cout<<(cpt==2 ? "YES" : "NO");
    return 0;
}
