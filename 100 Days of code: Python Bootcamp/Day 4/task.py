# random number generator by random module
import random
import my_module  #imprting my_module.py file 

random_number = random.randint(1, 10)
print(random_number)

print(my_module.my_favorite_number)


random_1_to_10 = random.random() * 10
print(random_1_to_10)

random_float = random.uniform(1, 10)
print(random_float)

#make a head tail coinflips
coinflip = random.randint(0, 1)
if coinflip == 1:
      print("Heads")
else:
      print("Tails")