#Names: Jeremy Leung/#
#CIS 101-1100#
#Date completed: 11/18/19#
#Discription: This program is a guessing game where the user tries
#to guess the najor basketball team names, Lakers, Golden State, Toronto, Nets
#and keep a running total of the amount of correct and incorrect guess totaling
#to 20 guesses. After whihch the programt will display the number of correct and
#incorrect guess as well as correct if the amount of correst guesses is greater
#the the amount of incorrect guess and vice versa and draw if correct and incorrect
#guess are equal.

#<-------------------OVERVIEW OF PROGRAM--------------------->#
#1: Declaried vairables#
#2: Welcome/Hello message#
#3: For loop to match guess to variables 20 times#
#4: Running totals for correct and incorrect guesses#
#5: display amount of correct and incorredt guesses#
#6: display correct/incorrect/draw depending on user input#
#7: Display for greater correct guesses#
#8: Display for greater incorrect guesses#
#8: Display for equal amount of correct and incorrect guesses#
#<-------------------OVERVIEW OF PROGRAM--------------------->#

#<------------------Brgining of Variables-------------------->#
#var to hold store the names of the basketball teams#
NAME1 = "Lakers"
NAME2 = "Golden State" 
NAME3 = "Toronto"
NAME4 = "Nets"
#instantiate the var correct and incorrect to store the number of correct and incorrect guesses#
incorrect = 0
correct = 0
#<---------------------End of Variables---------------------->#

#<----------------Brgining of display message---------------->#
#display a message to let the user know what this program is going to do#
print("You have 20 guesses to guess the name of a major basketball team.")
#<------------------End of display message------------------->#

#<-------------------Brgining of for loop-------------------->#
#for loop to begin a 1 and run until 20#
for x in range (1,21):
    #get user input and store in var guess#
    #use the str() function to cast var x into a string to disply Guess 1:, Guess 2: Guess 3:, ...etc#
    guess = input("Guess " + str(x) + ": ")
    #unilizing the .title() funtion to cast user input to captialize the first letter in each word
    #to check if user input mathces the bascketball names
    guess = guess.title()
    
    #<----------------Brgining if statement to check user input---------------->#
    #if a mmatch is found update var correct by 1 to keep a running total#
    if guess == NAME1 or guess == NAME2 or guess == NAME3 or guess == NAME4:
        correct += 1
    #if a mmatch is but found update var incorrect by 1 to keep a running total#
    else:
        incorrect += 1
    #<------------------End if statement to check user input------------------>#
        
#<---------------------End of For loop--------------------->#

#<-------Beginning of correct and incorrect guesses-------->#
#print the amount of correct and incorrect guesses#
print("Number of correct guesses:", correct)
print("Mumber of incorrect guesses:", incorrect)
#<----------End of correct and incorrect guesses----------->#

#<------------Beginning correct/incorrect/draw------------->#
#if correct is grester then incorrect display correct#
if correct > incorrect:
    print("Correct")
#if correct is less then then incorrect display incorrect#
elif correct < incorrect:
    print("Incorrect")
#if correct is equal incorrect display draw#
elif correct == incorrect:
    print("Draw")
#<-------------End of correct/incorrect/draw--------------->#
    
#<----------Beginning of greater correct guesses----------->#
#You have 20 guesses to guess the name of a major basketball team.#
#Guess 1: lakers#
#Guess 2: golden states#
#Guess 3: Toronto#
#Guess 4: Nets#
#Guess 5: giants#
#Guess 6: panthers#
#Guess 7: shockers#
#Guess 8: rippers#
#Guess 9: defenders#
#Guess 10: the heat##
#Guess 11: matadors#
#Guess 12: the hot shots#
#Guess 13: lakers#
#Guess 14: toronto#
#Guess 15: nets#
#Guess 16: Golden state#
#Guess 17: lakers#
#Guess 18: nets#
#Guess 19: nets#
#Guess 20: Lakers#
#Number of correct guesses: 11#
#Mumber of incorrect guesses: 9#
#Correct#
#<-------------End of greater correct guesses-------------->#

#<---------Beginning of greater incorrect guesses---------->#
#You have 20 guesses to guess the name of a major basketball team.#
#Guess 1: lakers#
#Guess 2: Golden Gtate#
#Guess 3: toronto#
#Guess 4: nets#
#Guess 5: the perfecto#
#Guess 6: shootng stars#
#Guess 7: basket junkies#
#Guess 8: the hot shots#
#Guess 9: the crush#
#Guess 10: jayhawks#
#Guess 11: savage storms#
#Guess 12: basket hounds#
#Guess 13: panthers#
#Guess 14: shockers#
#Guess 15: net rippers#
#Guess 16: the crusaders#
#Guess 17: defenders#
#Guess 18: the heat#
#Guess 19: matadors#
#Guess 20: Lakers#
#Number of correct guesses: 5#
#Mumber of incorrect guesses: 15#
#Incorrect#
#<------------End of greater incorrect guesses------------->#

#<---------------Beginning of equal guesses---------------->#
#You have 20 guesses to guess the name of a major basketball team.#
#Guess 1: lakers#
#Guess 2: golden state#
#Guess 3: toronto#
#Guess 4: Nets#
#Guess 5: defneders#
#Guess 6: the heat#
#Guess 7: panthers#
#Guess 8: shockers#
#Guess 9: rippers#
#Guess 10: lakers#
#Guess 11: golden state#
#Guess 12: toronto#
#Guess 13: nets#
#Guess 14: Lakers#
#Guess 15: nets#
#Guess 16: matadors#
#Guess 17: the heat#
#Guess 18: jayhawks#
#Guess 19: shooting stars#
#Guess 20: the crush#
#Number of correct guesses: 10#
#Mumber of incorrect guesses: 10#
#Draw#
#<-------------------End of equal guesses------------------>#
