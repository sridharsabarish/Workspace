string timeConversion(string s) {
string time=s.substr(0,8);
string hour=time.substr(0,2);
string rest=time.substr(2,8);
string meridian=s.substr(8,10);
if(meridian=="PM")
{
    if(hour!="12")
    {  
        int val=stoi(hour);
        val+=12;
        hour=to_string(val);
    }   
}
else
{
    if(hour=="12")
    {
        hour="00";
    }
}
return hour+rest;
}