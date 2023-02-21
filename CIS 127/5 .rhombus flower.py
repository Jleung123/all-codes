#Name:  Jeremy Leung
#Email: jeremy.leung59@myhunter.cuny.edu
#Date: September 1, 2021
#This program will draw a rhombus flower

#import turtle and give it attributes background color:khaki
#shape:turtle, color: green, pensize: 3
import turtle
back = turtle.Screen()   
back.bgcolor("khaki")
star = turtle.Turtle()
star.shape("turtle")
star.pencolor("black")
star.pensize(3)
star.fillcolor("green")

#for loop to make the turtle draw each rhombus flower 6 times
for i in range (6):
    star.forward(100)
    star.left(45)
    star.forward(100)
    star.left(135)
    star.stamp()
    star.forward(100)
    star.left(45)
    star.forward(100)
    star.left(195)

wn.exitonclick()
