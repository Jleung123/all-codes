#Name:  Jeremy Leung
#Email: jeremy.leung59@myhunter.cuny.edu
#Date: September 1, 2021
#This program will draw a pinwheel

#import turtle and give it attributes shape:arrow, color: purple, pensize: 3
import turtle
pwheel = turtle.Turtle()
pwheel.shape("arrow")
pwheel.color("purple")
pwheel.pensize(3)

pwheel.forward(30)

#for loop to make the turtle draw the right side of the phin wheel
for i in range (3):
    pwheel.forward(50)
    pwheel.right(120)

#nested for loop to draw the other 3 sides pf the pinwheel
for i in range (3):
    pwheel.backward(30)
    pwheel.right(90)
    pwheel.forward(30)
    
    for i in range (3):
        pwheel.forward(50)
        pwheel.right(120)

#to bring the pin wheel back to the starting location
pwheel.backward(30)

wn.exitonclick()
