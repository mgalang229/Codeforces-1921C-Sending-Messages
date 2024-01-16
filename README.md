Link: https://codeforces.com/contest/1921/problem/C
## Analyis
```
m is sorted in non-decreasing order

if on, then lose a units of charge (per unit of time)
if off, then lose b units of charge (constant)

f units (initial charge)

if charge level becomes <= 0, it's impossible to send a message

goal:
- check if he can send all the messages

---------------------------

1
7 21 1 3
4 6 10 13 17 20 26

 0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  1  

f -= min(m[i] - prev * a, m[i] - prev * b)
check if f is > 0

4 - 0 = 4 > 3
21 - 3 = 18

6 - 4 = 2 < 3
18 - 

ans: YES

---------------------------

current charge must be > than moment (m[i])

decide whether to keep it turned ON or turn it OFF
```
