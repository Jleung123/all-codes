months = int(input("Enter the month in numbers\Month: "))
days = int(input("enter the day of the month]nDay: "))
years = int(input("Enter The date of the year\Year: "))
if months*days == years:
    print("This date is magic\n", months,"/",days,"/",years)
else:
    if months*days != years:
        print("the date is not magic")
    else:
        print("input our of bounds")
