print("Enter an binary number :    ")
try:
    a=int(input(), 2)
    print(a)
except ValueError:
    print("Invalid")