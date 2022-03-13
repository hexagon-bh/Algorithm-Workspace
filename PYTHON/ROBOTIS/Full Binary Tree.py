alphabet=str(input())
alphabet_list=["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
list_no=alphabet_list.index(alphabet)
int(list_no)
print(list_no)
list_no +=1
if list_no==1:
    print("Lv.1")
elif 1<list_no<=3:
    print("Lv.2")
elif 2<list_no<=7:
    print("Lv.3")
elif 7<list_no<=15:
    print("Lv.4")
elif 15<list_no<=26:
    print("Lv.5")
