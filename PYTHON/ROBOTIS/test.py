from datetime import datetime
import calendar
years=datetime.today().year
Month=datetime.today().month
#(월) 1일 요일 구하기
dates=[" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "]
def f_month_1():
    global years,Month,dates
    month_range=calendar.monthrange(years,Month)
    dates=[" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "]
    month_range=list(month_range)
    for i in range(1,month_range[1]+1):
        dates.insert(month_range[0],str(i))
        month_range[0] += 1
#f_month_1()
dates=[" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "]