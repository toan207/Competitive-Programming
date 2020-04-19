def questionCorrection(s):
    ans = ''
    for i in range (len(s)):
        if s[i].isalpha() or s[i].isdigit() or s[i] == ',' or s[i] == ' ':
            if s[i].isalpha():
                if ans == '':
                    ans+=s[i].upper()
                else:
                    ans+=s[i].lower()
            elif s[i] == ',' and ans!= '':
                if s[i+1] == ',' or s[i+1] == '?' or ans[len(ans)-1] == ' ':
                    continue
                else:
                    ans+= s[i] + ' '
            elif s[i] == ' ' and ans!='' and i!=len(s)-1:
                if s[i+1] == ',' or s[i+1] == ' ' or ans[len(ans)-1] == ' ':
                    continue
                else:
                    ans+= s[i]

            elif s[i].isdigit():
                ans+=s[i]
        else:
            ans += ' '
        ans = ans.replace('  ',' ')

    ans += '?'
    ans = ans.replace(' ?','?')
    return ans

print(questionCorrection("this  is not   a     relevant question , is it??? "))