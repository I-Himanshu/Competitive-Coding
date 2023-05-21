class Solution {
public:
    int tribonacci(int n) {
        int a = 0,b=1,c=1;
        if(n==2) return n-1;
        if(n<=1) return n;
        int k = a+b+c;
        for(int i = 0;i<n-2;i++){
            k = a+b+c;
            a=b;
            b=c;
            c=k;
        }
        return k;
    }
};