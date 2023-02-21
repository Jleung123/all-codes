item1 = float(input("Enter the cost of the first item: "))
item2 = float(input("Enter the cost of the second item: "))
item3 = float(input("Enter the cost of the third item: "))
item4 = float(input("Enter the cost of the forth item: "))
item5 = float(input("Enter the cost of the fifth item: "))
tax = 0.007
totalTax = (item1 + item2 + item3 + item4 + item5)* tax
total = totalTax + item1 + item2 + item3 + item4 + item5
print("Sale: ", item1 + item2 + item3 + item4 + item5, "\nTax: ", totalTax, "\nTotal: ", total)
