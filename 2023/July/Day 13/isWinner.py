# Source : https://leetcode.com/problems/determine-the-winner-of-a-bowling-game/
class Solution:
    def isWinner(self, player1: List[int], player2: List[int]) -> int:
        s1=self.calcScore(player1);
        s2=self.calcScore(player2)
        print("S1 :",s1)
        print("S2 :",s2)
        if(s1>s2):
            return 1
        if s2>s1:
            return 2
        else:
            return 0;

    def calcScore(self, player:List[int]) -> int:
        p1=-1
        p2=-2
        s=0;
        for score in player:
            if(p1==10 or p2==10):
                s+=score*2;
                p2=p1
                p1=score
            else:
                s+=score
                p2=-1
                p1=score;
            if score==10:
                p1=10
                p2=10
        return s
               
            