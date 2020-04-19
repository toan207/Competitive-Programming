# Cho hai xâu kí tự, tìm số lượng kí tự chung giữa chúng.

def commonCharacterCount(s1, s2):
    count = 0
    i = 0
    while i<len(s2):
        if s2[i] in s1:
            count += min(s2.count(s2[i]),s1.count(s2[i]))
            s1 = s1.replace(s2[i],'')
            s2 = s2.replace(s2[i],'')
            i = 0
        i += 1
    return count