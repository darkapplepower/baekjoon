a=int(input());
b=int(input());
c=a//2;
d=c;
if a%2:
    c+=1;
c+=b//2;
d-=b//2;
print(c);
print(d);