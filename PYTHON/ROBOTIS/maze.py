maze = {
    'a' : ['e'],
    'b' : ['c', 'f'],
    'c' : ['b', 'd'],
    'd' : ['c'],
    'e' : ['a', 'i'],
    'f' : ['b', 'g', 'j'],
    'g' : ['f', 'h'],
    'h' : ['g', 'l'],
    'i' : ['e', 'm'],
    'j' : ['f', 'k', 'n'],
    'k' : ['j', 'o'],
    'l' : ['h', 'p'],
    'm' : ['i', 'n'],
    'n' : ['m', 'j'],
    'o' : ['k'],
    'p' : ['l']
}
start='a'
end='p'
qu=[]
done=set()
qu.append(start)
done.add(start)
while qu:
    p=qu.pop(0)
    v=p[-1]
    if v==end:
        print(p)
        break
    for x in maze[v]:
        if x not in done:
            qu.append(p+x)
            done.add(x)