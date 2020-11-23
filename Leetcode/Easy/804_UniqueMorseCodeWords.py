# https://leetcode.com/problems/unique-morse-code-words/

class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        mapping = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        ansDict = {}
        for i in words:
            mark = ''
            for j in i:
                mark += mapping[ord(j) - ord('a')]
            ansDict[mark] = 1
        return len(ansDict)