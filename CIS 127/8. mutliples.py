#Name:  Jeremy Leung
#Email: jeremy.leung59@myhunter.cuny.edu
#Date: September 7, 2021
#This program will print the values from 1-20 skipping the odd numbers
#and their values +10

#initialize a counter called x and set it to 2
x = 2

#for each itteration of the for loop it prints out the current value of x
#and the value of x + 10
#then adds 2 to x
for i in range(10):
    print("current value: ", x, " | ", "value+10: ", x + 10)
    x = x + 2
