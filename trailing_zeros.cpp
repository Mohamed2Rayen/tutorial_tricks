#include <iostream>
using namespace std;
ll trailingZeroes(ll n)
{
    // Edge Case
    if (n < 0)
        return -1;
    // Initialize result
    long long count = 0;
    // Keep dividing n by powers of 5 and update count
    for (int i = 5; n/i >= 1; i *= 5){
        count += n / i;
    }
    return count;
}

int main()
{
    long long n;
    cin>>n;
    cout <<trailingZeroes(n);
    return 0;
}
/*
This program calculates the number of trailing zeros in n! (n factorial).

Why this works:
- Trailing zeros are created by the number 10.
- 10 = 2 × 5.
-We calculate the minimum number of occurrences between 2 and 5, because a trailing zero requires both.
Even if 2 appears many times, having only one 5 means only one factor of 10 can be formed, 
resulting in one trailing zero.
- In n!, there are many more factors of 2 than factors of 5.
- So, the number of trailing zeros depends only on how many times 5 appears.

How the loop works:
- n / 5  → counts numbers that contribute at least one factor of 5
- n / 25 → counts numbers that contribute an extra factor of 5 (like 25 = 5×5)
- n / 125 → counts numbers with yet another factor of 5, and so on
- We keep adding these values until the division becomes 0.

Simple example:
If n = 25:
- n / 5   = 5   → (5=5*1, 10 = 5*2, 15=5*3, 20=5*4, 25=5*5) the sum is 6 , but dividing 25/5 gives 5 , so we :
divide n / 25  = 1   → (25 adds one more 5)
- n / 125 = 0   → stop
-> Total trailing zeros = 5 + 1 = 6
(it's right , because the number of trailing zeros in 25! is 6)
Time Complexity: O(log₅(n))
*/

