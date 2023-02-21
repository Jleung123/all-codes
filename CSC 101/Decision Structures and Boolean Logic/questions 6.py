#questions 6, magic dates
#get user input and store the month in variable months
months = int(input("Enter the month in numbers\Month: "))
#get user input and store the day in variable days
days = int(input("enter the day of the month]nDay: "))
#get user input and store the year in variable years
years = int(input("Enter The date of the year\Year: "))
#caculate the magic date only is the ((month*day)=year)
if months*days == years:
    print("This date is magic\n", months,"/",days,"/",years)
#else the date is not magic
elif months*days != years:
    print("the date is not magic")
