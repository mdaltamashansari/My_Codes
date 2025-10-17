# if, elif, else statements
print("Welcome to Roller Coaster!")
height = int (input("What is your height in cm? "))
if height >= 120:
      print("You can ride the roller coaster!")
else:
      print("Sorry, you have to grow taller before you can ride.")   
      

# nested loop 
print("Welcome to the rollercoaster!")
height = int(input("What is your height in cm? "))
bill = 0
if height >= 120:
      print("You can ride the roller coaster!")
      age = int(input("What is your age? "))
      if age < 12:
            bill = 5
            print("Child tickets are $5.")
      if age <= 18:
            bill = 7
            print("Youth tickets are $7.")
      else:
            bill = 12
            print("Adult tickets are $12.")
            
      wants_photo = input("Do you want a photo taken? Y or N. ")
      if wants_photo == "Y":
            bill += 3 #bill = bill + 3
      print(f"Your final bill is ${bill}.")  #print(f"Your final bill is ${bill:.3f}")  # 3 decimal places
else:
      print("Sorry, you have to grow taller before you can ride. m") 
      
      
# logical opertors 
# and -> True if both conditions are True
# not -> Inverts the Boolean value
# or-> or operator basics A or B is True if at least one of A or B is True.