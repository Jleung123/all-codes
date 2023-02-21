keep_going = 'y'
while keep_going =='y':
    sales = float(input("Enter the amount of sales: "))
    comm_rate = float(input("Enter the commission rate: "))
    commission = sales * comm_rate
    print("the commission is $", format(commission, ",.2f"), sep="")
    keep_going = input("Do you want to calculate another commission (Enter y for Yes): ")
#---------------------------------------------------------------------------------#
MAX_TEMP = 102.5
temperature = float(input("Enter the substance's Celsius tempearute: "))
while temperature > MAX_TEMP:
    print("the temperature is too high.")
    print("Turn the thermostat down and wait")
    print("5 minutes, then take the temperature")
    print("again and enter it.")
    temperature = float(input("Enter the new Celsius temperature: "))
print("The temperatueere is acceptable ")
print("Check it again in 15 minutes.")
#----------------------------------------------------------------------------------#
#keep_going1 = 'y'
#while keep_going1 == 'y':
#    sales = float(input("Enter the amount of sales: "))
#    comm_rate = float(input("Enter the commission rate: "))
#    commission = sales * comm_rate
#    print("the commission is $", format(commission, ",.2f"), sep="")
#----------------------------------------------------------------------------------#
for num in [1, 2, 3, 4, 5]:
    print(num)
#----------------------------------------------------------------------------------#
x = 1
while x <= 10:
    print(x)
    x += 1
#----------------------------------------------------------------------------------#
x = 10
while x >= 1:
    print(x)
    x -= 1
#----------------------------------------------------------------------------------#
x = 10
while x >= 1:
    if x % 2 == 0:
        print(x)
        x -= 1
