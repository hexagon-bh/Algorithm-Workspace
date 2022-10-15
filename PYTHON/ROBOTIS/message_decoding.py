d_key=list(input("decryption key: "))
encoding_str=list(input("encryption sentence: "))
alphabet=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
sentence_len=len(encoding_str)
for i in range(0,sentence_len):
    for j in range(0,26):
        if encoding_str[i]==d_key[j]:
            encoding_str[i]=alphabet[j]
        elif encoding_str[i]==' ':
            pass
print(encoding_str)