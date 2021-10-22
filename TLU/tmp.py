while True:
    setBit = int(input('Set bit: '))
    IP = input('IP: ').split('.')
    if (setBit == 0 or setBit > 31):
        print('Bit > 0 and Bit < 32')
    if (setBit < 24):
        IP[3] = '0'
    if (setBit < 16):
        IP[2] = '0'
    if (setBit < 8):
        IP[1] = '0'
    tmp = int(IP[int(setBit / 8)])
    tmp = tmp - ( tmp % ( 1<<int(8 - (setBit % 8)) ) )
    IP[int(setBit / 8)] = str(tmp)
    print('.'.join(IP), end='\n\n')