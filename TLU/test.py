import csv

def checkDay(date1, date2):
    if date1[2] > date2[2]:
        return False
    if date1[2] == date2[2] and date1[1] > date2[1]:
        return False
    if date1[2] == date2[2] and date1[1] == date2[1] and date1[0] > date2[0]:
        return False
    return True

def checkLeapYear(year):
    return year%4 == 0 and (year%400 == 0 or year%100 != 0)

def countingDay(date1, date2):
    dayOfMonth = [31,28,31,30,31,30,31,31,30,31,30,31]
    countDay = 0
    if checkLeapYear(date1[1]):
        dayOfMonth[1] = 29
    if date1[1] < date2[1] or date1[2] < date2[2]:
        countDay += dayOfMonth[date1[1]-1] - date1[0]
        date1[1] += 1
    else:
        return date2[0] - date1[0]
    for i in range(date1[2],date2[2]):
        date2[1] += 12
    for i in range(date1[1],date2[1]):
        countDay += dayOfMonth[i%12 - 1]
        if checkLeapYear(date1[2] + i//12):
            dayOfMonth[1] = 29
        else:
            dayOfMonth[1] = 28
    return countDay + date2[0]

def checkRecycleProduct(row, date1, date2):
    days = countingDay(date1,date2)
    if row[2].lower() == 'bong tay trang' and days >= 30:
        fw.write("Người mua có ID " + str(row[0]) + " đã mua BÔNG TẨY TRANG tại " + str(row[4]) + " được " + str(days) + " ngày\n")
    if row[2].lower() == 'bim' and days >= 20:
        fw.write("Người mua có ID " + str(row[0]) + " đã mua BỈM tại " + str(row[4]) + " được " + str(days) + " ngày\n")
    if row[2].lower() == 'bang ve sinh' and days >= 7:
        fw.write("Người mua có ID " + str(row[0]) + " đã mua BĂNG VỆ SINH tại " + str(row[4]) + " được " + str(days) + " ngày\n")

fw = open('NoticeToCustomer.txt','w',encoding='utf-8')

with open('Book1.csv', newline='', encoding='utf-8') as csvfile:
    spamreader = csv.reader(csvfile, delimiter = ',', quotechar = '|')
    spamreader = list(spamreader)[1:]
    date = input('Nhap ngay hom nay (dd/mm/yyyy): ')
    date = list(map(int,date.split('/')))
    for row in spamreader:
        dateInfo = list(map(int,row[3].split('/')))
        if checkDay(dateInfo, date):
            checkRecycleProduct(row,dateInfo,date)
        else:
            print("Ngay khong hop le!")