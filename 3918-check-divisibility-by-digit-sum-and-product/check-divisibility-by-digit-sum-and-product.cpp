class Solution {
public:
    bool checkDivisibility(int n) {
        int digit=0,sum=0,prod=1,num=n;
        while(n>0){
            digit=n%10;
            sum+=digit;
            prod*=digit;
            n/=10;
        }
        return num%(sum+prod)==0;
    }
};