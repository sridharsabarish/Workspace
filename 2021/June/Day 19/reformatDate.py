# Source : https://leetcode.com/problems/reformat-date/submissions/
class Solution(object):
    def reformatDate(self, date):
        """
        :type date: str
        :rtype: str
        """
        lists = date.split(" ");

        newstr="";
        newstr=newstr+lists[2]+"-";

        dicts = {"Jan":"01", "Feb":"02", "Mar":"03", "Apr":"04", "May":"05", "Jun":"06", "Jul":"07", "Aug":"08", "Sep":"09", "Oct":"10", "Nov":"11", "Dec":"12"}
        newstr+=dicts[lists[1]]+"-"

        day=""
        for i in lists[0]:
            if(i.isdigit()):
                day+=i
        day = int(day);
        if(day<10):
            newstr+='0';
        newstr+=str(day);
        return newstr
