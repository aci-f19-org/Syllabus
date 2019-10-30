#Halloween starbuck-y
import random as r
from time import sleep

drinks = ["latte", "espresso", "cappuccino", "macchiato"]
spice = ["cinnamon", "nutmeg", "ginger", "vanilla", "pumpkin"]
iced = True if r.random() > .5 else False

customer = input("What's your name: ")
wait_time = len(customer)
drink = wait_time % len(drinks)
done = 0

while wait_time is not done:
    print(".")
    sleep(wait_time/10)
    wait_time -= 1

print (customer + " " +
       spice[r.randint(0, len(spice)-1)] + " " + drinks[drink])

if not iced:
    print ('eeeww')



