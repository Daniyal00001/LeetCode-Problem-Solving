class Solution {
public:
    bool isPalindrome(int n) {
    int original_n = n ;
    long long rev = 0;

// reverse the number(mathematical technique)
while (n > 0) {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n = n / 10;
}

if (rev == original_n){
    return true;
    }
else{
    return false;
}

    }
};