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