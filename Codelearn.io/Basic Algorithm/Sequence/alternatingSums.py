# Một số người đứng thành một số hàng và được chia vào 2 đội
# Người đầu tiên được chia vào team1, 
# người thứ hai vào team2, 
# người thứ ba vào team1, 
# người thứ tư vào team2, ... cho đến người cuối cùng
# Bạn được cho một mảng số nguyên dương thể hiện trọng lượng của mỗi người
# Hãy tính toán và trả ra mảng gồm 2 số nguyên dương, thể hiện tổng trọng lượng của team1 và team2

def alternatingSums(a):
    team1 = 0
    team2 = 0
    f = 1
    for i in a:
        if f:
            team1 += i
            f = 0
        else:
            team2 += i
            f = 1
    
    ans = [0] * 2
    ans[0] = team1
    ans[1] = team2
    return ans