import random
stages = ['''
  +---+
  |   |
      |
      |
      |
      |
=========''', '''
  +---+
  |   |
  O   |
      |
      |
      |
=========''', '''
  +---+
  |   |
  O   |
  |   |
      |
      |
=========''', '''
  +---+
  |   |
  O   |
 /|   |
      |
      |
=========''', '''
  +---+
  |   |
  O   |
 /|\  |
      |
      |
=========''', '''
  +---+
  |   |
  O   |
 /|\  |
 /    |
      |
=========''', '''
  +---+
  |   |
  O   |
 /|\  |
 / \  |
      |
=========''']
word_list = ('ant baboon badger bat bear beaver camel cat clam cobra cougar '
         'coyote crow deer dog donkey duck eagle ferret fox frog goat '
         'goose hawk lion lizard llama mole monkey moose mouse mule newt '
         'otter owl panda parrot pigeon python rabbit ram rat raven '
         'rhino salmon seal shark sheep skunk sloth snake spider '
         'stork swan tiger toad trout turkey turtle weasel whale wolf '
         'wombat zebra ').split()
lives = 6
chosen_word = random.choice(word_list)
print(chosen_word)

placeholder = ""
word_length = len(chosen_word)
for position in range(word_length):
    placeholder += "_" #placeholder = placeholder + "_"
print(placeholder)

gameover = False
correct_letter = []

while not gameover:
      guess = input("Guess a letter: ").lower() 
#lowercase to standardize input
      display = ""

      for letter in chosen_word:
           if letter == guess:
            display += letter
            correct_letter.append(letter)
           elif letter in correct_letter:
            display += letter
           else:
            display += "_"  
            
      print(display)
      
      if guess not in chosen_word:
            lives -= 1
            if lives == 0:
                gameover = True
                print("You lose.")
      if "_" not in display:
            gameover = True
            print("You win!")    
      print (stages[lives])