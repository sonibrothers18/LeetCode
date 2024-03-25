class Solution{
public:
    int hammingWeight(int n){
        int add = 0;
        while(n!=0){
            if(n&1){ //--> logic gate and
                add += 1;
            }
            n = n >> 1; //--> right shift
        }
        return add;
    }
};