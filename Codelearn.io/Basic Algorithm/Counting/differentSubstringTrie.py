def differentSubstringsTrie(inputString):
    s = 0
    e = len(inputString)
    count = 0
    i = 1
    mark_list = []
    while i<=len(inputString):
        s = 0
        for j in range(i,e+1):
            if inputString[s:j] not in mark_list:
                mark_list.append(inputString[s:j])
                count += 1
            s += 1
        i += 1
    return count

differentSubstringsTrie('abac')