
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    int i,j;
    for(i = 0;i<pricesSize-1;i++){
        for (j = i+1;j<pricesSize;j++){
            if(prices[j]<=prices[i]){
                prices[i]=prices[i]-prices[j];
                break;
            }
        }
    }
    *returnSize=pricesSize;
    return prices;
}
