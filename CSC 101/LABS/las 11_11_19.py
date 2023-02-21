MIN_SALARY = 30000.0
MIN_YEARS = 2
salary = float(input("Enter you annual salary: "))
years_on_job = int(input("enter the Number of years employed: "))
if salary >= MIN_SALARY and years_on_job >= MIN_YEARS:
    print("you qualify for the loan")   
else:
    print("Your do not qualify for this loan")

#-----------------------------------------------------------------------#
MIN_SALARY = 30000.0
MIN_YEARS = 2
salary = float(input("Enter you annual salary: "))
years_on_job = int(input("enter the Number of years employed: "))
if salary >= MIN_SALARY or years_on_job >= MIN_YEARS:
        print("you qualify for the loan")
else:
    print("You do no qualify for this loan")
