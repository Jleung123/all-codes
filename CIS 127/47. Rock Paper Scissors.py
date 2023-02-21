#Name:  Jeremy Leung
#Email: jeremy.leung59@myhunter.cuny.edu
#Date: November 9th, 2021
#This program will play a game of rock paper scissors between the user and the computer

#import random funtion so computer can make a random decision
import random

#function to randomize the computer's move
def computer():
    move = random.randrange(1,4)
    #print the comptuer's move
    print("computerMove: " + str(move))

    #return computer move back to the calling function
    return move

#function to calculate who won that round
def round(computer_move, human_move):
    if human_move == 1 and computer_move == 1: #rock and rock = draw
        winner = "draw"
    elif human_move == 1 and computer_move == 2: #rock vs paper
        winner = "computer"
    elif human_move == 1 and computer_move == 3: #rock vs scissors
        winner = "human"
    elif human_move == 2 and computer_move == 1: #paper vs rock
        winner = "human"
    elif human_move == 2 and computer_move == 2: #paper vs paper
        winner = "draw"
    elif human_move == 2 and computer_move == 3: #paper vs scissors
        winner = "computer"
    elif human_move == 3 and computer_move == 1: #scissors vs rock
        winner = "computer"
    elif human_move == 3 and computer_move == 2: #scissors vs scissors
        winner = "human"
    elif human_move == 3 and computer_move == 3: #scissors vs scissors
        winner = "draw"
    else:
        winner = "invalid" #user did not enter 1, 2, or 3

    #return the results back to the calling function
    return winner

def main():
    #get user input as an int for rock, paper or scissors
    human_move = int(input("enter 1 for rock, 2 for paper, or 3 for scissors: "))

    #initialize a variable called winner to print results when game ends
    winner = ""

    #input validation to keep the game running as longs as user does not enter a value below 1
    while not human_move < 1:
        computer_move = computer() #get the computer's move
        winner = round(computer_move, human_move) #check the round winner
        print("round finished and winner is: " + winner) #print the round winner

        #get the human's move for the next turn
        human_move = int(input("enter 1 for rock, 2 for paper, or 3 for scissors: "))

    #print the results from the last round since game ended
    print("game finished and winner is: " + winner)

if __name__ == "__main__":
    main()
