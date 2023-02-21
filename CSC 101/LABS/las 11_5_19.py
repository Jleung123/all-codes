BASE_HOURS = 40
OT_MULTIPILER = 1.5
hours = float(input("Enter the number of hours worked: "))
pay_rate = float(input("Enter the hourly pay rate: "))
if hours > BASE_HOURS:
    overtime_hours = hours - BASE_HOURS
    overtime_pay = overtime_hours * pay_rate * OT_MULTIPILER
    gross_pay = BASE_HOURS * pay_rate + overtime_pay
else:
    gross_pay = hours * pay_rate

print("the gross pay is $", format(gross_pay, ",.2f"), sep="")
#------------------------------------------------------------------#
password = input("Enter the password\nPassword: ")

if password == "prospero":
    print("Password accepted")
else:
    print("Password incorrect")
#------------------------------------------------------------------#
name1 = input("enter a name (last name, frst name)\nName: ")
name2 = input("enter another name (last name, frst name)\nName: ")
print("here are the name, listed alphabetically.")
if name1 < name2:
    print(name1)
    print(name2)
else:
    print(name2)
    print(name1)
#------------------------------------------------------------------#
MIN_SALARY = 30000.0
MIN_YEARS = 2
salary = float(input("Enter you annual salary: "))
years_on_job = int(input("enter the Number of years employed: "))
if salary >= MIN_SALARY:
    if years_on_job >= MIN_YEARSl:
        print("you qualify for the loan")
    else:
        print("you must have been employed for at least", MIN_YEARS ,"years to qualify")
else:
    print("you must have earn at least $", format(MIN_SALARY, ",2f"),"per year to qualify")
