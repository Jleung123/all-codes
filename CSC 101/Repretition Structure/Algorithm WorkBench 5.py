top = 1
bot = 30
total = 0
count = 1
while count <= 30:
    total += (top/bot)
    top += 1
    bot -= 1
    count += 1
print("The total is: ", total)
