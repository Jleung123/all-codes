mealCharge = float(input("Enter the charge for the mean\nMeal: "))
totalTip = mealCharge * 0.18
salesTaxTotal = mealCharge * 0.07
print("THe cost of the meal: ", mealCharge,"\nThe amount from tip: ", totalTip,"\nThe sales tax: ", salesTaxTotal,"\nSubtotal: ", mealCharge+totalTip+salesTaxTotal)
