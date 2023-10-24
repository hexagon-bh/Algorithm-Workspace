area=["노원구","양천구","강남구","구로구"]
mayor1={"name":"송영길","total":0}
mayor2={"name":"오세훈","total":0}
for i in range(4):
    print("---송영길---\n")
    value=int(input(area[i-1]+"의 투표수: "))
    mayor1["total"]=mayor1["total"]+value
    mayor1[area[i-1]]=value
    print("---오세훈---\n")
    value=int(input(area[i-1]+"의 투표수: "))
    mayor2["total"]=mayor2["total"]+value
    mayor2[area[i-1]]=value
mayor_t=max(mayor1["total"],mayor2["total"])
if mayor1['name']==mayor_t:
    print(mayor1)
else:
    print(mayor2)
