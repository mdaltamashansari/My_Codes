import random
from hangman_words import word_list
from hangman_art import logo, stages

lives = 6

print(logo)

chosen_word = random.choice(word_list)
print(chosen_word)  #Debugging: remove this line later to hide the answer

placeholder = ""
word_length = len(chosen_word)
for position in range(word_length):
    placeholder += "_"
print("Word to guess: " + placeholder)

game_over = False
correct_guesses = []

while not game_over:
    guess = input("Guess a letter: ").lower()

    if guess in correct_guesses:
        print(f"You've already guessed the letter '{guess}'. Try again.")
    else:
        correct_guesses.append(guess)

        if guess in chosen_word:
            print(f"Good job! The letter '{guess}' is in the word.")
            new_placeholder = ""
            for position in range(word_length):
                letter = chosen_word[position]
                if letter in correct_guesses:
                    new_placeholder += letter
                else:
                    new_placeholder += "_"
            placeholder = new_placeholder
            print("Word to guess: " + placeholder)
        else:
            lives -= 1
            print(f"Sorry, the letter '{guess}' is not in the word. You lose a life.")
            print(stages[lives])
            print("Word to guess: " + placeholder)

    if "_" not in placeholder:
        game_over = True
        print("🎉 Congratulations! You've guessed the word correctly and won the game!")

    if lives == 0:
        game_over = True
        print(f"💀 You've run out of lives. The word was '{chosen_word}'. Better luck next time!")