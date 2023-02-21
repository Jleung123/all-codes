#Name:  Jeremy Leung
#Email: jeremy.leung59@myhunter.cuny.edu
#Date: September 7, 2021
#This program will take take a string from user input and cast it to upper case
#and lower case, then a letter from user input and check how many times the letter
#appears in the string

#get user input(s) and assign them to the variable user and num
user = input("Enter a message: ")
num = input("Enter a letter: ")

#print the string entered by user, string cast to upper case, and stering
#cast to lower case

print(user)
print(user.upper())
print(user.lower())

#initialize a counter to count the number of times the letter apears in the string
counter = 0

#for loop to count the number of times the letter appears in the string
#if the current letter = the searched letter
for i in user.lower():
    if num == i:
        #if match found add 1 to the counter
        counter = counter + 1

#print the count
print(counter)
