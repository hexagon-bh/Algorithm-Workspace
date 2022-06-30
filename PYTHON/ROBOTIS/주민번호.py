a=input("주민번호: ")
birth=a[0:6]
gender=a[6]

print(birth+"-"+gender+"******")
if gender=="1":
    gender="남자"
elif gender=="2":
    gender="여자"
print("생일: "+birth+" 성별: "+gender)