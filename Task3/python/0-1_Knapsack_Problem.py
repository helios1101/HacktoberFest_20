def knapsackBF(weights, values, maxWeight):
    n=len(values)
    dp=[[0 for j in range(maxWeight+1)]for i in range(n+1)]
    for i in range(1,n+1):
        for j in range(1,maxWeight+1):
            if j<weights[i-1]:
                ans=dp[i-1][j]
            else:
                ans1=values[i-1]+dp[i-1][j-weights[i-1]]
                ans2=dp[i-1][j]
                ans=max(ans1,ans2)
            dp[i][j]=ans
    return dp[n][maxWeight]
    
    

from sys import setrecursionlimit
setrecursionlimit(11000)
n=int(input())
weights=list(int(i) for i in input().strip().split(' '))
values=list(int(i) for i in input().strip().split(' '))
maxWeight=int(input())
print(knapsackBF(weights, values, maxWeight))
