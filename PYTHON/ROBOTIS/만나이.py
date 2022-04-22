from datetime import datetime
year,month,day=map(int,input("생일을 입력해주세요(형식:xxxx.xx.xx)>> ").split("."))
t_year= datetime.today().year  
t_month=datetime.today().month
t_day= datetime.today().day
age=t_year-year+1
if  (t_month==month and t_day>=day) or (t_month>month):
    m_age=age-1
    print(m_age)
if (t_month==month and t_day<day) or (t_month<month):
    m_age=age-2
    print(m_age)

if m_age<=7:
    print("어린이 요금: 무료")
elif m_age>=8 and m_age<=19:
    print("학생 요금")
elif m_age>=20 and m_age<=65:
    print("일반 요금")
elif m_age>65:
    print("우대 요금")