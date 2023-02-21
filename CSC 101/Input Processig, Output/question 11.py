#Question 11, percentage of boys/girls
girls = int(input("Enter the amount of females in a given class\nFemales: "))
boys = int(input("Enter the amount of Males in a given class\nMales: "))
total = girls + boys
girlPercent = (girls/total)*100
boyPercent = (boys/total)*100
print("Females: ", girls, "\nmales: ", boys , "\nClass total: ", total, "\nPercent of males: ", boyPercent, "%\nPercent of females: ", girlPercent, "%")
