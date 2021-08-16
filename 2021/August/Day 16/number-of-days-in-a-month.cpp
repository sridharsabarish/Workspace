class Solution {
public:
    int numberOfDays(int year, int month) {


        if(year%400==0 && month==2)
        {
                return 29;
        }
        else if(year%100==0 && month==2)
        {
            return 28;
        }

        else if(year%4==0 && month==2)
        {
            return 29;
        }
        else if(month==2)
        {
            return 28;
        }

        else if(month ==4 || month==6 || month==9 || month==11)
        {
            return 30;
        }

            return 31;

    }
};
