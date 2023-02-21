height = float(input("Enter your height in inches\nHeight: "))
weight = float(input("Enter your weight in pounds\nWeight: "))
BMI = weight * (703/(height*height))
print(BMI)
if BMI < 18.5:
    print("You are underweight")
elif BMI>= 18.5 and BMI <= 25:
    print("Your BMI is optimal")
elif BMI> 25:
    print("You are overweight")
else:
    print("Input out of bounds")
