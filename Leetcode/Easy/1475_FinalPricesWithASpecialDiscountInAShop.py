# https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/

class Solution:
    def finalPrices(self, prices):
        discount = [0]
        for i in range(len(prices)-1, -1, -1):
            for j in range(len(discount)-1, -1, -1):
                if prices[i] - discount[j] >= 0:
                    discount.append(prices[i])
                    prices[i] -= discount[j]
                    break
        return prices

print(Solution.finalPrices(Solution, [4, 4, 4, 4, 6]))