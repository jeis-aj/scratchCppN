
num = input()
ax =int(num);
for i in range(ax):
    st = " "
    print((ax-i) * st,end="")
    for j in range(i*2):
        print('*',end ="")
    print('\n')
