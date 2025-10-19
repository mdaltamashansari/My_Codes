friends = ['Altamash', 'Ahmed', 'Saeed', 'Hassan', 'Umair']
import random
pay = random.choice(friends)
print(f"{pay} is going to buy the meal today!")

random_index = random.randint(0, 4)  
print(f"{friends[random_index]} is going to buy the meal today!")