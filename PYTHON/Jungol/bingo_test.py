import random
mc=[[0 for _ in range(5)] for _ in range(5)]
def print_table(a):
    if a==2:
        for i in range(0,5):
            print(mc[i])
number_list=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25]
random.shuffle(number_list)
n=0
for j in range(0,5):
    for i in range(0,5):
        mc[j][i]=number_list[n]
        n+=1
print_table(2)