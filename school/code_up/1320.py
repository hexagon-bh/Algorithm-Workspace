start_h,start_m=map(int,input().split())
minute=int(input())
start_m=start_m+minute
if start_m>=60:
    t=start_m//60
    if start_h<23:
        start_h=start_h+t
        start_m=start_m%60
    elif start_h==23:
        start_h=0
        start_h=start_h+(t-1)
        start_m=start_m%60
print(start_h,start_m)
