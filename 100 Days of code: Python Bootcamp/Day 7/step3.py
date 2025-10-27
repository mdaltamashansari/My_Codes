word_list = ["ardvark", "baboon", "camel"]
import random 
chosen_word = random.choice(word_list)
print(chosen_word)

guess = input("Guess a letter: ").lower()
print(f"You guessed: {guess}") 