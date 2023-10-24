list=["바퀴벌레","진드기","곱등이","돈벌레","모기","초파리","나방"]
while True: 
    try:
        a=str(input("제거할 대상을 입력하시오: "))
        list.remove(a)
    except:
        print("제거할 대상이 존재하지 않습니다..")
    else:
        print(list)
        print("제거완료!")
        break