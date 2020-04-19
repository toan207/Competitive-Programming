# Một pangram là một câu mà mỗi kí tự chữ cái (a-z) được sử dụng ít nhất một lần
# Cho một xâu kí tự, kiểm tra xem nó có phải là một pangram hay không?

def isPangram(sentence):
    sentence = sentence.replace(' ','')
    sentence = sentence.lower()
    i = 0
    while i<len(sentence):
        if not sentence[i].isalpha():
            sentence = sentence.replace(sentence[i],'')
            i = 0
        i += 1
    mark = []
    mark.extend(sentence)
    return len(set(mark)) == 26