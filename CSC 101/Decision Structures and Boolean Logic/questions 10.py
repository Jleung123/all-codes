pennies = int(input("Let play a game, enter the amount of of change in pennies, nickels, dimes, and quarters to try and reach a dollar\nAmount of pennies: "))
nickels = int(input("Amount of nickels: "))
dimes = int(input("Amount of dimes: "))
quarters = int(input("Amount of pennies: "))
p = 1 * pennies
n = 5 * nickels
d = 10 * dimes
q = 25 * quarters
total = p + n + d + q
if total < 100:
    print("You only have a total of ", total ,"in change, you have not made it to a doller.")
elif total == 100:
    print("CONGRATS YOU WIN")
elif total > 100:
    print("you went over by ",total - 100," in change")
