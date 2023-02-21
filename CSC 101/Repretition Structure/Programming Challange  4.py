speed = int(input("What is the speed of the chicle in mph?\nMPH: "))
time = int(input("How many hours has it raveled?\nHours: "))
print("Hours\t\t\tDistance Traveled")
print("_________________________________________")
for num in range (1, time + 1):
    distance = speed * num
    num += 1
    print(num - 1, "\t\t\t\t", distance)
