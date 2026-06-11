class Solution {
public:
    double myPow(double x, int n) {
       long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double result = 1.0;
        while (N > 0) {
            // If the current power is odd, multiply the result by x
            if (N % 2 == 1) {
                result *= x;
            }
            x *= x; // Square the base
            N /= 2; // Halve the exponent
        }
        return result;
    }
};