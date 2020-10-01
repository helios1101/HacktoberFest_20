import random
import time


def choose():
    c = random.choice(["s", "p", "r"])
    return c


user = 0
pc = 0
max_chance = 10
min_chance = 0
print("-----G A M E  S T A R T E D-----")

while(min_chance < max_chance):
    print("\n Press 's' for stone\n Press 'p' for paper\n Press 'r' for scissors")
    ch = input("Your guess: ")
    _rand = choose()

    if ch == _rand:
        print("\n\nD R A W . Both at 0 points\n")

    if ch == 's' and _rand == 'p':
        pc = pc+1
        print(f"\t\tYour guess is {ch} and computer guess is {_rand}")
        print(f"\t\tComputer wins by 1\n")
        print(f"\t\tYour score : {user}\n\t\tComputer score: {pc}\n")

    elif ch == 's' and _rand == 'r':
        user += 1
        print(f"\t\tYour guess is {ch} and computer guess is {_rand}")
        print(f"\t\tYou win by 1\n")
        print(f"\t\tYour score : {user}\n\t\tComputer score: {pc}\n")

    elif ch == 'p' and _rand == 's':
        user += 1
        print(f"\t\tYour guess is {ch} and computer guess is {_rand}")
        print(f"\t\tYou win by 1\n")
        print(f"\t\tYour score : {user}\n\t\tComputer score: {pc}\n")

    elif ch == 'p' and _rand == 'r':
        pc += 1
        print(f"\t\tYour guess is {ch} and computer guess is {_rand}")
        print(f"\t\tComputer wins by 1\n")
        print(f"\t\tYour score : {user}\n\t\tComputer score: {pc}\n")

    elif ch == 'r' and _rand == 's':
        pc += 1
        print(f"\t\tYour guess is {ch} and computer guess is {_rand}")
        print(f"\t\tComputer wins by 1\n")
        print(f"\t\tYour score : {user}\n\t\tComputer score: {pc}\n")
    elif ch == 'r' and _rand == 'p':
        user += 1
        print(f"\t\tYour guess is {ch} and computer guess is {_rand}")
        print(f"\t\tYou win by 1\n")
        print(f"\t\tYour score : {user}\n\t\tComputer score: {pc}\n")

    min_chance += 1
    print(f"\t{max_chance-min_chance} chances are left out of {max_chance}")

print("Your score: ", user)
print("Computer's score: ", pc)

if(user > pc):
    print("You won the game !!!")
else:
    print("You lose")

print("----G A M E   O V E R----")

print("--Closing game in 5 seconds--")
time.sleep(5)
