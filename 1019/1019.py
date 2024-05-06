testcase = int(input())
for i in range(testcase):
    arr = input()
    for j in range(len(arr)):
        if(arr[j] == 'Z'):
            print('A',end='')
        else:
            print(chr(ord(arr[j])+1), end='')
    print()
