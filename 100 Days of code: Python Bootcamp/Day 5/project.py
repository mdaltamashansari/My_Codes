# password Genertor by Altamash
import random
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' ]
numbers = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '0']
symbols = ['!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+']
print("Welcome to the PyPassword Generator!")
nr_letters= int(input("How many letters would you like in your password? "))
nr_numbers = int(input("How many numbers would you like in your password? "))
nr_symbols = int(input("How many symbols would you like in your password? "))

# easy level
# password = ""
# #  random_char = random.choice(letters)
# for char in range(1, nr_letters + 1): #range not includes the upper limit  so we add 1
#  password += random.choice(letters)
 
# for char in range(1, nr_numbers + 1): #we also do range(0, nr_numbers) it will work the same
#  password += random.choice(numbers)

# for char in range(1, nr_symbols + 1):
#  password += random.choice(symbols)

# print(password)

#Hard Level
password_list = []
#  random_char = random.choice(letters)
for char in range(1, nr_letters + 1): #range not includes the upper limit  so we add 1
 password_list.append(random.choice(letters))
 
for char in range(1, nr_numbers + 1): #we also do range(0, nr_numbers) it will work the same
 password_list.append(random.choice(numbers))

for char in range(1, nr_symbols + 1):
 password_list.append(random.choice(symbols))

print(password_list) #without suffle 

random.shuffle(password_list)
print(password_list)

password = ""
for char in password_list:
      password += char  #password = password + char
print(f"Your password is: {password}")
print("Thank you for using password generator")