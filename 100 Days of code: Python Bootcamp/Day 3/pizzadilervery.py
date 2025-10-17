print("Welcome to python pizza deliveries!")
size = input("What size pizza do you want? S, M, or L :")
add_pepperoni = input("Do you want pepperoni? Y or N :")
extra_cheese = input("Do you want extra cheese? Y or N :")
bill = 0
if size == "S":
      bill = 15   
elif size == "M":
      bill = 20
elif size == "L":
      bill = 25
      if add_pepperoni == "Y":
            bill = bill + 2
      else:
            bill 
if extra_cheese == "Y":
      bill = bill + 3
else:
      bill
print(bill)