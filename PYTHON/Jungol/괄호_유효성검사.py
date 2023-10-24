for _ in range(int(input())):
	stk = []
	ans = "YES"
	for c in input():
		if c == "(":
			stk.append(c)
		else:
			if len(stk) > 0:
				stk.pop()
			else:
				ans = "NO"
		if len(stk) > 0:
			ans = "NO"
		print(ans)