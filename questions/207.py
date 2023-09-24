staircount = int(input())
count = [1,2]
if staircount == 1:
    print(1)
else:
    for i in range(2,staircount):
        count.append(count[i-1]+count[i-2])
    print(count[len(count)-1])