# main functin to get the orginal purchase from user input
# and to call the other functions passing the var purchase
# as will as the amount of salesTax and countyTax and the total Tax
def main ():
    purchase = float(input("Enter the amount of a purchase: "))
    SalesTax = sales_tax(purchase)
    countyTax = county_tax(purchase)
    totalTax = total(SalesTax, countyTax)
    totalSale(purchase, SalesTax, countyTax, totalTax)
# salse_tax function that accepts the purchase variable as a argument and
# calculates the total amount of salesTax and returns the
# sales tax amount back to the variable SalesTax in the main function
def sales_tax(purchase):
    tax = 0.05
    total = purchase * tax
    return total
# county_tax function that accepts the purchase variable as a argument and
# calculates the total amount of countyTax and returns the
# county tax amount back to the variable countyTax in the main function
def county_tax(purchase):
    tax = 0.025
    total = purchase * tax
    return total
# total function that accepts the SalesTax and countyTax variable
# as arguments and add them to get the total amount in tax, then returns
# the total back the variable totalTax in the main function
def total(SalesTax, countyTax):
    total = SalesTax + countyTax
    return total
# totalSale funtion to get all the variables declaired in the main function
# as arguments and calculates the total and prints out the results
def totalSale(purchase, SalesTax, countyTax, totalTax):
    total = purchase + totalTax
    print("The amount for the purchase: $" + str(purchase))
    print("The amount in Sales Tax: : $" + str(SalesTax))
    print("The amount in county Tax: $" + str(countyTax))
    print("The total amount for the purchase: $" + str(total))
# calls the main funtion
main()
