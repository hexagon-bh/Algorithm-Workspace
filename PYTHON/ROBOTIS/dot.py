import turtle
win = turtle.Screen()
t=turtle.Turtle("turtle")
turtle.title('Turtle')
win.setup(500,500)
def show(x,y):
    t.goto(x,y)
win.onclick(show)
turtle.mainloop()