# https://codelearn.io/training/detail?id=609243

def countMoney(moneyToBuy):
    count = 0
    if moneyToBuy>=500000:
        count = moneyToBuy//500000
        moneyToBuy -= count*500000
    if moneyToBuy>=200000:
        count += moneyToBuy//200000
        moneyToBuy -= (moneyToBuy//200000)*200000
    if moneyToBuy>=100000:
        count += moneyToBuy//100000
        moneyToBuy -= (moneyToBuy//100000)*100000
    if moneyToBuy>=20000:
        count += moneyToBuy//20000
        moneyToBuy -= (moneyToBuy//20000)*20000
    if moneyToBuy>=10000:
        count += moneyToBuy//10000
        moneyToBuy -= (moneyToBuy//10000)*10000
    if moneyToBuy>=5000:
        count += moneyToBuy//5000
        moneyToBuy -= (moneyToBuy//5000)*5000
    if moneyToBuy>=2000:
        count += moneyToBuy//2000
        moneyToBuy -= (moneyToBuy//2000)*2000
    if moneyToBuy>=1000:
        count += moneyToBuy//1000
        moneyToBuy -= (moneyToBuy//1000)*1000
    
    return count