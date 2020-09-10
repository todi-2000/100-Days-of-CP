class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count5=0,count10=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
                count5++;
            else if(bills[i]==10)
            {
                if(count5<1) return false;
                count5--;count10++;
            }
            else if(bills[i]==20)
            {
                if(count10>=1) 
                {
                    if(count5<1)
                    return false;
                    else
                    {
                        count10--;count5--;   
                    }
                }
                else if(count10<1) 
                {
                    if(count5<3)
                        return false;
                    count5-=3;
                }
            }
        }
        return true;
    }
};