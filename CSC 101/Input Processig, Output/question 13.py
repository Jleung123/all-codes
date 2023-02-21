r = float(input("Enter the length of the row, in feet\nLength: "))
e = float(input("Enter the amount of space used by an end-post assebmly, in feet\nSpace used: "))
s = float(input("Enter the amount of space between the vinces, in feet\nSpace between the vines: "))
v = (r-(2*e))/s
print("The amound of grapevinces that will fit in each row: ", v)
