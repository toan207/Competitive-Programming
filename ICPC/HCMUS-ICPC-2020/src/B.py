n,c = map(int,input().split())
total = 0
for i in range (n):
    mm,ss = map(int,input().split(':'))
    total += (mm*60 + ss)
total -= c*(n-1)
hours = total//3600
total -= hours*3600
minute = total//60
total -= minute*60
second = total
print('0' + str(hours) if hours < 10 else str(hours), '0' + str(minute) if minute < 10 else str(minute), '0' + str(second) if second < 10 else str(second), sep=':')