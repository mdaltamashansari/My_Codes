import random
word_list = ["Goat", "wolf", "lion", "tiger"]
chosen_word = random.choice(word_list)
print(chosen_word)

placeholder = ""
word_length = len(chosen_word)
for position in range(word_length):
    placeholder += "_" #placeholder = placeholder + "_"
print(placeholder)

guess = input("Guess a letter: ").lower() 
#lowercase to standardize input

display = ""
for letter in chosen_word:
      if letter == guess:
            display += letter
      else:
            display += "_"
print(display)