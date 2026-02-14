class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0,twenty=0;
        for(int i=0;i<=bills.size();i++)
        {   if(i==bills.size())
                return true;
            if(bills[i]==5)
                five++;
            else if(bills[i]==10 && five>0)
            {   five--;
                ten++;}
            else 
            {   if(ten>0 && five>0) 
                {ten--;
                five--;
                twenty++;}
                else if(five>2)
                {
                    five -=3;
                    twenty++;
                }
                else break;
            }
        }
        return false;
    }
};