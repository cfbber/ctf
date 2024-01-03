hex_str="437261636b4d654a757374466f7246756e"

byts=bytes.fromhex(hex_str);

str = byts.decode('utf-8');

print(str);