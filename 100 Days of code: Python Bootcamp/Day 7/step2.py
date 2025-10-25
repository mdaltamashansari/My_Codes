import random
word_list = ["Goat", "wolf", "lion"]
chosen_word = random.choice(word_list)
print(chosen_word)

word_length = len(chosen_word)

placeholder = ""
for postion in range(word_length):
    placeholder += "_"
print(placeholder)

guess = input("Guess a letter: ").lower()

display = ""
for letter in chosen_word:
      if letter == guess:
            display += letter
      else:
            display += "_"
            print(display)