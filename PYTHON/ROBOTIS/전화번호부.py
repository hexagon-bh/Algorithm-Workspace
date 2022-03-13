addrlist=[
        {"idx":0,"name":'김강현',"phonenumber":'010-2245-8471',"addr":'노원구'},
        {"idx":1,"name":'채종민',"phonenumber":'010-4186-3611',"addr":'노원구'},
        {"idx":2,"name":'우수연',"phonenumber":'010-5527-2035',"addr":'노원구'},
        {"idx":3,"name":'이재준',"phonenumber":'010-9045-1833',"addr":'노원구'}
    ]
idx=3
def menu():
    print("1.입력 2.출력 3.검색 4.수정 5.삭제 6.종료")
    no = int(input("선택>>>"))
    return no
def outputData():
    print("####출력####")
    for i in addrlist:
        print("{: ^3}|{: ^6}|{: ^13}|{: ^9}".format(i["idx"],i["name"],i["phonenumber"],i["addr"]))
def inputData():
    print("####입력####")
    global idx
    idx += 1
    name = input("이름입력>>>")
    phone =input("전화번호 입력>>>")
    addr = input("주소 입력>>>")
    data_value={"idx":idx,"name":name,"phonenumber":phone,"addr":addr}
    addrlist.append(data_value)
    print("데이터입력 성공!!")
def searchData():
    print("#### 검색 ####")
    searchname=input("검색 할 이름을 입력하세요>>>")
    for i, person in enumerate(addrlist):
        if person["name"]==searchname:
            print(addrlist[i])

def modifyData():
    print("#### 수정 ####")
    modifyname=input("수정 할 이름을 입력하세요>>>")
    for i, person in enumerate(addrlist):
        if person["name"]==modifyname:
            print(addrlist[i])
            for i,person in enumerate(addrlist):
                if modifyname ==person["name"]:
                    idx=addrlist[i]
                    print(idx)
                    name=input("성명입력>>>")
                    phone=input("전화번호 입력>>>")
                    addr=input("주소입력>>>")
                    data_value={"idx":idx,"name":name,"phonenumber":phone,"addr":addr}
                    addrlist[idx]=data_value
                    print("데이터수정성공!!")
def deleteData():
    pass
    
factory = [inputData,outputData,searchData,modifyData,deleteData]
def run(no):
    print("{}번이 선택되었습니다!".format(no))
    if no==6:
        print("#### 종료 ####")
        exit(0)
    if no in range(1,len(factory)+1):
        factory[no-1]()
    else:
        print("해당사항 없음!")
def main():
    while True:
        print("{:=^40}".format("주소록"))
        no=menu()
        run(no)

if  __name__ == '__main__':
    main()