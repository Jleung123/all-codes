weight = int(input("Enter weight of the packages being shipped in pounds\nWeight: "))
if weight <= 2:
    print("your total is: $",1.5*weight)
elif weight > 2 and weight < 6:
    print("Your total: $", 3*weight)
elif weight > 6 and weight < 10:
    print("Your total: $", 4*weight)
elif purchase > 10:
    print("Your total: $", 4.75*weight)
else:
    print("Input out of bounds")
