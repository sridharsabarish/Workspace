# Source : https://leetcode.com/problems/slowest-key/
class Solution:
    def slowestKey(self, releaseTimes: List[int], keysPressed: str) -> str:
        time=0
        key='-1'
        prev=0;
        for i in range(len(releaseTimes)):
            if(releaseTimes[i]-prev>=time):  
                if(releaseTimes[i]-prev==time):
                    if keysPressed[i]>key:
                        key=keysPressed[i]
                else:
                    time=releaseTimes[i]-prev;
                    key=keysPressed[i]
            prev=releaseTimes[i]
        return key;