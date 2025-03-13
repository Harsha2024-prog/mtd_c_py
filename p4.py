# Program to print the numbers from m to n (m < n) with an increment of p

m = int(input ('Enter the M value (start value): '))
n = int(input ('Enter the N value (End value): '))
p = int(input ('Enter the P value (Increment): '))

i = m
while i <= n:
    print(i, end= ' ')
    i += p
else:
    print('Mostly u gave valut to m which is bigger than n')