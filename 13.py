s = input().strip()
n = int(input())
print(s[:n%len(s)].count('a')+(s.count('a')*(n//len(s))))