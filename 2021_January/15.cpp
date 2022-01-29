/*1716. 计算力扣银行的钱*/
class Solution {
public:
    int totalMoney(int n) {
        int time = n / 7;
        int r = n % 7;
        int res;
        if(time > 0)
            res =  r * time + (28 + 28+7*(time-1)) * time / 2 + (1 + r) * r / 2;
        else
            res = (1 + r) * r / 2;
        return res;
    }
};