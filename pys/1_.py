
def f1():
# s[i] != (char) (*((_BYTE *)&v7 + i % v6) ^ v8[i])
# s[i] != ( &v7 + i % v6) ^ v8[i]
#  strcpy(v8, ":\"AL_RT^L*.?+6/1
# ");
#   v7 = 0x65626D61726168LL;
#   v6 = 7;
    v6 = 7
    v7 = int('0x65626D61726168',16)
    sv8 = ":\"AL_RT^L*.?+6/46"

    for i in range(len(sv8)):
        res = (v7 + i % v6 ) ^ ord(sv8[i])
        print(res)

    print("hello")


f1()