#Name:  Jeremy Leung
#Email: jeremy.leung59@myhunter.cuny.edu
#Date: September 7, 2021
#This program will take a user input and reverse the string
#and print the last letter in the sting

#get user input and assign it to the variable user
user = input("Enter a phrase: ")

#initialize 2 strings temp and backwards to empty strings
temp = ""
backwards = ""

#for loop to reverse the string by assigning the last letter of the user inputed
#string to the temp string
for i in range(len(user)):
    x = len(user) - i
    y = x - 1
    temp = temp + user[y]

#print the string reversed
print("Reversed phrase: ", temp)

#initialize a variable called cap and set it to the casted upper case value of temp
#and split each word in the string by the dilimeter ' '
cap = temp.upper()
splited = cap.split(' ')

#for loop to get the current word in the string and assign it to curnWrod
#and get the last letter in the current word and assign it backwards
for i in range(len(splited)):
    #get the current word
    curnWord = splited[i]
    #get the length of the current word
    wordlen = len(curnWord)
    #get the last letter in the current word
    lastlet = curnWord[wordlen - 1]
    #add the last letter to of the current word to variable backwards
    backwards = backwards + lastlet

#print the last letter of each word in the string
print("Last letters of reversed words: ", backwards)
