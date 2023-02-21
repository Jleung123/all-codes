#Jeremy Leung
#Opening print line to great the user
print("If you reduce your daily calorie intake by 500\nYou can lose 4 pounds each month")
print("This program can simulate how many pounds you will lose in 6 months folowing this deit")
#var pounds to get user input
pounds=float(input("Enter your starting weight in pounds: "))
#head of the table
print("Months\t\t\t Pounds Lost")
print("------------------------------------")
#startingP is a temp var that will store the orginal user input
startingP = pounds
#for loop to count from 1 - 6
for i in range(1,7):
    #pounds - 5 in each itteration of the for loop
    pounds -= 5
    #if statement to test the condition of the month number
    #only to make the program better looking
    if (i == 1):
        print(str(i) + "st Month\t\t", pounds, "pounds")
    elif (i == 2):
        print(str(i) + "nd Month\t\t", pounds, "pounds")
    elif (i == 3):
        print(str(i) + "rd Month\t\t", pounds, "pounds")
    else:
        print(str(i) + "th Month\t\t", pounds, "pounds")
#totalLost is the final amout of weight that the user will lose at the end of the 6 months
totalLost = startingP - pounds
#print the total weight lost at the end of the 6 months
print("Your total weight lose at the end of the 6 months is",totalLost, "pounds")
