print("Celsius\t\t\tFahrenheit")
print("__________________________________")
celsius = 0
for num in range (0, 20):
    farhenheit = ((9/5)*celsius) + 32
    print(celsius, "\t\t\t", format(farhenheit, ",.2f"))
    celsius += 1
