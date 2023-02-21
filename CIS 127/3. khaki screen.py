#Name:  Jeremy Leung
#Email: jeremy.leung59@myhunter.cuny.edu
#Date: September 1, 2021
#This program will draw a house

#import turtle and set screen color to khaki
import turtle
wn = turtle.Screen()
wn.bgcolor("khaki")

#create a turtle name alex and give it attributes darkblue and pen size 5
tess = turtle.Turtle()
tess.color("darkblue")
tess.pensize(5)

#create a turtle named alex and give it attributes darkblue and pen size 5
alex = turtle.Turtle()
alex.color("violet")
alex.pensize(5)

#for loop to make tutle tess draw a square
for i in range (4):
    tess.forward(100)
    tess.left(90)

#instructions for turtle alex go up 100 then draw a triangle
alex.left(90)
alex.forward (100)
alex.right(30)
alex.forward(100)
alex.right(120)
alex.forward(100)
alex.right(120)
alex.forward(100)

wn.exitonclick()
