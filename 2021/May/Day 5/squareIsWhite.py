# Soure : https://leetcode.com/problems/determine-color-of-a-chessboard-square/submissions/
class Solution:
    def squareIsWhite(self, coordinates: str) -> bool:

        dicts ={'a':False,'b':True,'c':False,'d':True,'e':False,'f':True,'g':False,'h':True}


        index = int(coordinates[1])%2
        if(index):
            return dicts[coordinates[0]]
        else:
            return not dicts[coordinates[0]]
