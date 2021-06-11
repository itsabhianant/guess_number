import random

def guess(x):
    """User guesses the random number that the computer has generated."""

    random_number = random.randint(1, x)

    guess = 0
    while guess != random_number:
        guess = int(input(f"Guess a number between 1 and {x}: "))
        if guess > random_number:
            print("You have guessed high. Please guess low.")
        elif guess < random_number:
            print("You have guessed low. Please guess high.")
    
    print(f"Congrats you guessed the number {random_number} correctly.")

guess(10)

# If you want to change the guessing range change the x in guess(x)
# Ex you want to guess from 1 to 100 change the guess(10) to guess(100)