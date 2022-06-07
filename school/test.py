from datetime import datetime
old_minute=0
while True:
    today=datetime.now()
    hour=today.hour
    current_minute=today.minute
    second=today.second
    if current_minute==old_minute+1:
        print("d")
    old_minute=current_minute