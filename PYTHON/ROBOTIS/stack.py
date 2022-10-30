stack=[]
cnt=int(input())
for i in range(0,cnt):
    cmd=input()
    cmd=list(cmd)
    if cmd[0]=="i":
        stack.append(int(cmd[2]))
        print(stack)
    elif cmd[0]=="o":
        stack_len=len(stack)
        if stack_len==0:
            print("empty")
        else:
            print(stack[-1])
            stack.pop()
    elif cmd[0]=="c":
        stack_len=len(stack)
        print(stack_len)