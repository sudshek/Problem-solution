import random

num = random.randint(0,100)
for i in range(100):
    print i
    if i==num:
        exit()