# Source : https://leetcode.com/problems/thousand-separator/submissions/
class Solution(object):
    def thousandSeparator(self, n):
        """
        :type n: int
        :rtype: str
        """


        s = str(n);
        l = len(s)
        sep = float(l/3.0);

        if(sep == int(l/3)):
            sep = sep-1;
        else:
            sep = int(l/3);
        print(sep)
        if(sep<1):
            return s;
        else:
            # Add seperator after every third point;

            news = "";
            temp ="";
            counter = 0;
            for i in s[::-1]:
                temp+=i;
                counter+=1;
                if(counter==3):
                    news+=temp;
                    if(sep):
                        news+=".";
                    sep = sep-1;
                    temp = ""
                    counter =0;
            if(counter<3):
                news+=temp
            return(news[::-1])
