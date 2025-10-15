# Code by Md Altamash ansari

print("Welcome to the Tip Calculator!")
bill = float(input("What was the total bill? $"))
tip = int (input("How much tip would you like to give? 10, 12, or 15? $"))
people = int(input("How many people to split the bill? "))
each_pay = ((bill + tip) / people)
print(f"each person should pay ${each_pay}") 
print("each person should pay $" + str(each_pay))