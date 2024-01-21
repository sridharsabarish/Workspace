string dayOfProgrammer(int year) {

    int requiredDate=256;
    
    bool isJulian=true;
    if(year>1917){isJulian=false;}
    bool isLeapYear=false;
    
    if(isJulian){isLeapYear=(year%4==0);}
    else
    {
        if(year%400==0 || (year%4)==0 && (year%100)!=0)
        {
            isLeapYear=true;
        }  
    } 
    int d,m; d=m=0;
    map<int,int> Day;
    Day[1]=31; Day[5]=31; Day[9]=30;
    Day[2]=28; Day[6]=30; Day[10]=31;
    Day[3]=31; Day[7]=31; Day[11]=30;
    Day[4]=30; Day[8]=31; Day[12]=31;
    
    if(isLeapYear)Day[2]+=1;
    string out="";
    int count=0;
    int month_start=1;
    if(year==1918)
    {
        month_start=3;
        count=46;    
    }
    
    for(int month=month_start;month<=12;month++)
    {
        for(int d=1;d<=Day[month];d++)
        {
            count++;
            if(count==256)
            {
                if(d<10)
                {
                    out+="0";
                }
                out+=to_string(d)+".";
                
                if(month<10){out+="0";}
                out+=to_string(month)+"."+to_string(year);
                return out;
            }
            
        }
        
    }
    return "01.01.01";
}