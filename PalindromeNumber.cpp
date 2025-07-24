#include <iostream>
#include <algorithm>
using namespace std;


bool isPalindrome(int x) {
    string s = x + "";

    string str = s;

    reverse(s.begin(), s.end());

    if(str == s) return true;
    

    return false;

}

bool isPalindromeReversal(int x){

    if(x < 0 || (x % 10 == 0 && x != 0)) return false;

    int rev = 0;

    while(x > rev){
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    return x == rev || x == rev / 10;
}

int main(){

    int x;
    cin >> x;
    
    bool flag = isPalindromeReversal(x);

    if(flag){
        cout << true;
    }else{
        cout << false;
    }

}