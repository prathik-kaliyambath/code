s=raw_input()
arr = s.split('+')
arr.sort()

ans=""
for u in arr:
    ans=ans+(str(u)+'+')

print ans[:-1]
