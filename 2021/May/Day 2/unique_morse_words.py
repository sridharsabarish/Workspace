# soruce : https://leetcode.com/problems/unique-morse-code-words/submissions/
class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:


        m = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]


        conv = {}
        ind = 0;
        for i in range(97,97+26):

            conv[chr(i)] = m[ind];
            ind = ind +1
        morse_words = [self.conv2morse(word,conv) for word in words]

        return(len(set(morse_words)))


    def conv2morse(self,word, conv):
        c = ""
        for w in word:
            c=c+conv[w]
        return c
