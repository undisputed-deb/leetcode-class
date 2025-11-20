class Solution {
public:
    int fib(int n) {
        // Base cases - the starting points
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        
        // Recursive case - add the two previous numbers
        return fib(n - 1) + fib(n - 2);
    }
};