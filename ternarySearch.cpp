procedure ternarySearch(x, a1, a2, . . . , an)
	i := 1, j := n
	while j >= l
		m1 := i + (j - i)/3
		m2 := j - (j - i)/3
		if am1 = x then return mid1
		else if am2 = x then return mid2
		else if x < am1 then j := m1 - 1
		else if x < am2 then i := m1 + 1, r := m2 - 1
		else i := m2 + 1
	return -1
