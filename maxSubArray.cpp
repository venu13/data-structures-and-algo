class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        int result = 0;
        int start = 0;
        int end = 0;
        int maxResult = 0;
        
        while(end < N)
        {
            result = result + Arr[end];
            if((end - start + 1) < K)
            {
                end++; //incrementing end of sliding window to meet k
            }
            else if((end - start + 1) == K)
            {
                maxResult = max(maxResult, result); //already storing sum.
                result = result - Arr[start]; //removing start of previous window
                start++;
                end++;
            }
        }
        return maxResult;
    }
    
    int max(int x, int y)
    {
        if (x > y)
            return x;
        else
            return y;
    }
};
