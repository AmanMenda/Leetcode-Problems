function maxProfit(prices: number[]): number {
    let minP = prices[0];
    let profit = 0;
  
    for (let currentP of prices) {
      if (currentP > minP) {
        profit = Math.max(profit, currentP - minP);
      } else {
        minP = currentP;
      }
    }
    return profit;
};