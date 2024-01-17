s="c61b68366edeb7bdce3c6820314b7498"

s2=""
for i in range(len(s)) : 
    # print(i)
    v3= -1
    if ( i & 1 )!=0 :
        v3 = 1
    s2+=chr(ord(s[i])+v3)

print(s2)

