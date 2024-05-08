testcase = int(input())
for i in range(testcase):
    data, key= input().split()
    for j in range(len(data)):
        print(chr(ord(data[j]) ^ ord(key[j%len(key)])), end=' ')
    print()