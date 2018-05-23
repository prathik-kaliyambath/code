inp= raw_input();
arr = inp.split(',')
i=0
while i<len(arr):
    arr[i]= arr[i][1:]
    i=i+1
arr[len(arr)-1]=arr[len(arr)-1][:-1]
if len(arr)==1 and arr[0]=='':
    print 0
    exit(0)
s = set(arr)
print len(s)
