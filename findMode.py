from collections import Counter
t = int(input())
while t > 0:
    n = input()
    arr = list(map(int,input().strip().split(' ')))
    dic = Counter(arr)
    maxi = max(dic.values())
    arr = [x[0] for x in dic.items() if x[1] == maxi ]
    arr.sort(reverse = True)
    string = ""
    for x in arr:
        string += str(x) + " "
    print(string)
    t -= 1
