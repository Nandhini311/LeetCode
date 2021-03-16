class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string> v(n);
        while(n!=0)
        {
            if(n%3==0)
                v[n-1]="Fizz";
            else if(n%5==0)
                v[n-1]="Buzz";
            else if((n%3==0)&&(n%5==0))
                v[n-1]="FizzBuzz";
            else
                v[n-1]=to_string(n);
            
            n--;
        }
        return v;
    }
    
};
