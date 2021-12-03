file = open('input.txt', 'r')
lines = file.readlines()
o2nums = []
co2nums = []

onenums = []
zeronums = []

current = []
current = lines

o2num = ""
co2num = ""




for i in range(0, 12):
    zcount = 0
    onecount = 0
    if(len(current) == 1):
        break
    for line in current:
        if(line[i] == '0'):
            zeronums.append(line.strip())
            zcount += 1
        else:
            onenums.append(line.strip())
            onecount += 1
    if(zcount > onecount):
        o2num += '0'
        current = zeronums
        onenums = []
        zeronums = []
    else:
        o2num += '1'
        current = onenums
        onenums = []
        zeronums = []
print("O2 Number:  " + current[0])

current = lines
for i in range(0, 12):
    zcount = 0
    onecount = 0
    if(len(current) == 1):
        break
    for line in current:
        if(line[i] == '0'):
            zeronums.append(line.strip())
            zcount += 1
        else:
            onenums.append(line.strip())
            onecount += 1
    if(zcount <= onecount):
        co2num += '0'
        current = zeronums
        zeronums = []
        onenums = []
    else:
        co2num += '1'
        current = onenums
        onenums = []
        zeronums = []



print("CO2 Number: " + current[0])