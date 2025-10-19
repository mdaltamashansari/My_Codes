                                                                                       
#        db        88                                                            88           
#       d88b       88   ,d                                                       88           
#      d8'`8b      88   88                                                       88           
#     d8'  `8b     88 MM88MMM ,adPPYYba, 88,dPYba,,adPYba,  ,adPPYYba, ,adPPYba, 88,dPPYba,   
#    d8YaaaaY8b    88   88    ""     `Y8 88P'   "88"    "8a ""     `Y8 I8[    "" 88P'    "8a  
#   d8""""""""8b   88   88    ,adPPPPP88 88      88      88 ,adPPPPP88  `"Y8ba,  88       88  
#  d8'        `8b  88   88,   88,    ,88 88      88      88 88,    ,88 aa    ]8I 88       88  
# d8'          `8b 88   "Y888 `"8bbdP"Y8 88      88      88 `"8bbdP"Y8 `"YbbdP"' 88       88  
                                                                                            

rock = "Rock"
paper = "Paper"
scissors = "Scissors"
user_chioce = input("Enter your choice (Rock, Paper, Scissors): ")
import random
random_number = random.randint(0,2)
if random_number == 0:  
 computer_choice = "Rock"
elif random_number == 1:
 computer_choice = "Paper"
else:
 computer_choice = "Scissors"
print(f"Computer chose: {computer_choice}")
if user_chioce == computer_choice:
      print("It's a draw!")
elif (user_chioce == rock and computer_choice == scissors) or \
      (user_chioce == paper and computer_choice == rock) or \
      (user_chioce == scissors and computer_choice == paper):
      print("You win!")
else:
      print("You lose!")
