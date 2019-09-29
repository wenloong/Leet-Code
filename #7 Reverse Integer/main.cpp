class Solution {
public:
    int reverse(int x) {
        int a = x;
        int b = 0;
        
        while(a != 0) {
            int c = a % 10;
            a = a / 10;
            
            if (b > INT_MAX / 10) return 0;
            if (b < INT_MIN / 10) return 0;
            b = b * 10 + c;
        }
        
        return b;
    }
};
