num = float(input("Enter a nonzero positive number: "))

if (num < 1):
    while num < 1:
        num = float(input("Enter a nonzero positive number: "))
else:
    print(num, "is a nonzero postive number")
