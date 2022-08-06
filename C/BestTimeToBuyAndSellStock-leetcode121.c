int maxProfit(int *prices, int pricesSize)
{
    int l = 0, r = 1;
    int maxP = 0;
    
    while (r < pricesSize) {
        if (prices[r] > prices[l])
            maxP = prices[r] - prices[l] > maxP ? prices[r] - prices[l] : maxP;
        else
            l = r;
        r++;
    }
    return maxP;
}