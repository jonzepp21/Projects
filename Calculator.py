import tkinter as tk

window = tk.Tk()
window.title('Calculator')
answer = tk.Entry(window, width = 40, borderwidth=3, bg='light yellow')
answer.grid(row=0, column=0, columnspan=4, padx=10)

f_num = ''


def button_add():
    return

def click(number):
    num=answer.get()
    answer.delete(0, tk.END)
    answer.insert(0, str(num) + str(number))

def decimal():
    num=answer.get()
    answer.delete(0, tk.END)
    answer.insert(0, str(num) + str("."))

def clear():
    answer.delete(0, tk.END)

def add():
    global f_num
    first_number = answer.get()
    global math
    math = "addition"

    f_num = float(first_number)
    answer.delete(0, tk.END)


def equal():
    second_number = answer.get()
    answer.delete(0, tk.END)

    if math == "addition":
        answer.insert(0, f_num + float(second_number))

    if math == "subtraction":
        answer.insert(0, f_num - float(second_number))

    if math == "multiplication":
        answer.insert(0, f_num * float(second_number))

    if math == "division":
        answer.insert(0, f_num / float(second_number))

    

def subtract():
    first_number = answer.get()
    global f_num
    global math
    math = "subtraction"
    f_num = float(first_number)
    answer.delete(0, tk.END)

def multiply():
    first_number = answer.get()
    global f_num
    global math
    math = "multiplication"
    f_num = float(first_number)
    
    answer.delete(0, tk.END)

def divide():
    first_number = answer.get()
    global f_num
    global math
    math = "division"
    f_num = float(first_number)
    answer.delete(0, tk.END)
    
    
    
    

    

but_1=tk.Button(window, text='1', width = 11, height = 2, bg='light grey', command = lambda:click(1))
but_2=tk.Button(window, text='2', width =11, height = 2, bg='light grey', command = lambda:click(2))
but_3=tk.Button(window, text='3', width = 11, height = 2, bg='light grey', command = lambda:click(3))

but_add=tk.Button(window, text='+', width = 11, height = 2, bg='light grey', command = lambda:add())

but_4=tk.Button(window, text='4', width = 11, height = 2, bg='light grey', command = lambda:click(4))
but_5=tk.Button(window, text='5', width = 11, height = 2, bg='light grey', command = lambda:click(5))
but_6=tk.Button(window, text='6', width = 11, height = 2, bg='light grey', command = lambda:click(6))

but_sub=tk.Button(window, text='-', width = 11, height = 2, bg='light grey', command = lambda:subtract())

but_7=tk.Button(window, text='7', width = 11, height = 2, bg='light grey', command = lambda:click(7))
but_8=tk.Button(window, text='8', width = 11, height = 2, bg='light grey', command = lambda:click(8))
but_9=tk.Button(window, text='9', width = 11, height = 2, bg='light grey', command = lambda:click(9))

but_mult=tk.Button(window, text='*', width = 11, height = 2, bg='light grey', command = lambda:multiply())


but_0=tk.Button(window, text='0', width = 24, height = 2, bg='light grey', command = lambda:click(0))
but_dec=tk.Button(window, text='.', width = 11, height = 2, bg='light grey', command = lambda:click(decimal))

but_div=tk.Button(window, text='/', width = 11, height = 2, bg='light grey', command = lambda:divide())

but_equal=tk.Button(window, text='=', width = 37, height = 2, bg='light grey', command = lambda:equal())
but_clear=tk.Button(window, text='Clear', width = 11, height = 2, bg='light grey', command = lambda:clear())

but_1.grid(row=1, column=0)
but_2.grid(row=1, column=1)
but_3.grid(row=1, column=2)

but_add.grid(row=1, column=3)

but_4.grid(row=2, column=0)
but_5.grid(row=2, column=1)
but_6.grid(row=2, column=2)

but_sub.grid(row=2, column=3)

but_7.grid(row=3, column=0)
but_8.grid(row=3, column=1)
but_9.grid(row=3, column=2)

but_mult.grid(row=3, column=3)

but_0.grid(row=4, column=0, columnspan=2)
but_dec.grid(row=4, column=2)
but_div.grid(row=4, column=3)

but_equal.grid(row=5, column=0, columnspan=3)
but_clear.grid(row=5, column=3)

window.mainloop()
