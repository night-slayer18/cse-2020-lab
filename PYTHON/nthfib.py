def solve(n):
   if n <= 2:
      return n - 1
   else:
      return solve(n - 1) + solve(n - 2)

n = int(input())
print(solve(n))
