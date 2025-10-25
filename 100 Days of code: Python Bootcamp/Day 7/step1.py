# Hangman Game by Altamash
#todo-1 randomly chosen a word from word list and asign it to a variable
word_list = ["adrak", "camel", "python"]
import random
chosen_word = random.choice(word_list)
print(chosen_word) #print the chosen word for testing purpose

#todo-2 ask user to guess a letter and convert it to lower case
guess = input("Guess a letter: ").lower() #use word in lowercase 
print(guess)   #input only one letter

#todo-3 check if the guessed letter is in the chosen word
for letter in chosen_word:
 if letter == guess:
      print("Right") 
 else:
      print("Wrong")