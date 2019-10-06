"""Change `word` to generate the other possible combinations."""
from itertools import permutations

word = 'hack'

perms = []

for i in range(1, len(word)+1):
    for c in permutations(word, i):
        perms.append("".join(c))

print(perms) 
