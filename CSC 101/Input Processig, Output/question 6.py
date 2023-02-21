purchase = float(input("Enter the amount of a purchase: "))
stateTax = 0.05
countyTax = 0.025
StateTotal = purchase*stateTax
CountyTotal = purchase*countyTax
TotalTax = StateTotal+CountyTotal
print("State Tax: ", StateTotal, "\nCounty Tax: ", CountyTotal, "\nTotal Tax: " , TotalTax, "\nTotal: ", purchase+TotalTax)
