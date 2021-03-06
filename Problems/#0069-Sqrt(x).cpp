class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)  
       return x; 
  
    long start = 1, end = x, ans;    
    while (start <= end)  
    {         
        long long mid = (start + end) / 2; 
        long long square = mid*mid;
        if (square == x) 
            return mid; 
        if (square < x)  
        { 
            start = mid + 1; 
            ans = mid; 
        }  
        else 
            end = mid-1;         
    } 
    return ans; 
    }
};


//alternative solution
class Solution {
public:
    int mySqrt(int x) {
    long r = x;
    while (r*r > x)
        r = (r + x/r) / 2;
    return r;
 }
};
