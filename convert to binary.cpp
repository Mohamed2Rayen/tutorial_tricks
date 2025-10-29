#include <bits/stdc++.h>
#define fin  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
using namespace std;

string res=""; // define res as global 

string convert_to_bin(ll a){
    while (a>0){
        res=to_string(a%2)+res; //Take the quotient, and keep dividing it by 2
      //until you reach zero , Each time you perform this division, take note of the remainder. 
      //instead of "res += to_string(a%2)" , we take the reverse string 
      // because "res = to_string(a%2) + res" is the opposite of "res+=to_string(a%2)" 
      // with "res+=to_string(a%2)" , if the input is 8 , the expected result should 
      // be 1000 , but this code will return 0001 . For that reason with this "res = to_string(a%2) + res"
      // if the input is 8 the result is 1000 , and that's what we expect !
        a=a/2;
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    res=convert_to_bin(n);
    cout<<res;
    return 0;
}
