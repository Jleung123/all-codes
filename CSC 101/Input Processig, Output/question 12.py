Joe_shares = 2000
Joe_orginal_Purchase = 40.00
amount_Paid = Joe_shares * Joe_orginal_Purchase
broker_Commission = 0.003 * amount_Paid
print("The amound of stocks bought: ", Joe_shares)
print("The amount Joe paid for the stock: ", Joe_orginal_Purchase)
print("The amount commision paid to the brker: ", broker_Commission)
Joe_sale_price = 42.75
amount_Sold_For = Joe_shares * Joe_sale_price
broker_Commission1 = 0.003 * amount_Sold_For
print("The amount Joe sold for the stock: ", Joe_sale_price)
print("The amount commision paid to the brker: ", broker_Commission1)
netSale = amount_Sold_For - amount_Paid
totalCommission = broker_Commission + broker_Commission1
netProfit = netSale - totalCommission
print("The net profit from the stock : ", netProfit)
print("The total commision paid to broker: ", totalCommission)
