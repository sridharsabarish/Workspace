# Source : https://leetcode.com/problems/day-of-the-week/submissions/
class Solution(object):
    def dayOfTheWeek(self, day, month, year):
        """
        :type day: int
        :type month: int
        :type year: int
        :rtype: str
        """


        td_day = 22
        td_month = 6
        td_year = 2021

        index = 2;

        enum = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]
        today = td_day + self.calc_month_days(td_month,td_year) + self.calc_year_days(td_year);

        givendate = day + self.calc_month_days(month,year)+self.calc_year_days(year);
        diff = (givendate-today)
        sign =1;
        if(diff<0):
            sign =-1;
        shift = (index+ sign*abs(diff)%7)%7;
        return enum[shift]


    def calc_month_days(self,month,year):

        m31=[1,3,5,7,8,10,12];
        m30=[4,6,9,11];

        sums =0;
        for i in range(1,month):
            if(i in m31):
                sums+=31;
            elif(i in m30):
                sums+=30;
            else:

                if(year%400==0):
                    sums+=29;
                elif(year%100==0):
                    sums+=28;
                elif(year%4==0):
                    sums+=29;
                else:
                    sums+=28;
        return sums;

    def calc_year_days(self,year):

        sums=0;
        for i in range(1971,year):

            if(i%400==0):
                sums+=366;
            elif(i%100==0):
                sums+=365;
            elif(i%4==0):
                sums+=366;
            else:
                sums+=365;
        return sums;

        
