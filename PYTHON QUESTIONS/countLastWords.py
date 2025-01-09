def countLastWord(s:str)->int:
    s=s.rstrip()
    count=0
    for i in range(len(s)-1,-1,-1):
        if s[i] == " ":
            break
        count+=1
    return count
s="for a little bird the people are playing "
print(countLastWord(s))