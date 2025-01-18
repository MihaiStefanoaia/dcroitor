import sys
sir = ''

for i in range(10,100):
    sir += str(i)

print(len(sir))
print(sir[int(sys.argv[1]) - 1])