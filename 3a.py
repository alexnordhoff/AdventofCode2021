file = open('input.txt', 'r')
lines = file.readlines()
gamma = ""
epsilon = ""

for i in range(0, 12):
    zcount = 0
    onecount = 0
    for line in lines:
        if(line[i] == '0'):
            zcount += 1
        else:
            onecount += 1
    if(zcount > onecount):
        gamma += '0'
        epsilon += '1'
    else:
        gamma += '1'
        epsilon += '0'
print(gamma)
print(epsilon)