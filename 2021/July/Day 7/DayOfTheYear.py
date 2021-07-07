# Source : https://leetcode.com/problems/day-of-the-year/
class Solution(object):
    def dayOfYear(self, date):
        """
        :type date: str
        :rtype: int
        """
        year = int(date[0:4])
        month =int(date[5:7])
        day = int(date[8:])


        count = day + self.getPreviousMonth(month,year);
        return count

    def getPreviousMonth(self,month,year):
        count =0;
        leap =0;
        if(year%100==0):
            if(year%400==0):
                leap=1;
            else:
                leap=0;
        elif(year%4==0):
            leap=1;

        m31 = [1,3,5,7,8,10,12];
        m30 = [4,6,9,11];
        for i in range(1,month):

            if(i in m31):
                count+=31
            elif(i in m30):
                count+=30
            elif(i==2):
                count+=28
                if(leap):
                    count+=1;
        return count



        
