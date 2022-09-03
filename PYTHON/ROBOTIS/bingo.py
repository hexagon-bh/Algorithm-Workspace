player=[[0 for _ in range(6)] for _ in range(6)]
mc=[[0 for _ in range(6)] for _ in range(6)]
def print_table(a):
    if a==1:
        for i in range(0,5):
            print(player[i])
    if a==2:
        for i in range(0,5):
            print(mc[i])
print_table(1)