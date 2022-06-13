import re

def parse(txt):
    # parse code
    pc = 0
    xe = re.findall("(for .+ in range\(.+\){)|(for .+ in range\(.+\).+{)|(for .+ in range\(.+\)\s.+{)", txt)
    print(xe[0])
    for y in xe:
        for x in y:
            if x!='':
                t = x.split(' ')
                r = t[3].replace(')','')
                r = r.replace('{','')
                r = r.replace('\n','')
                r = r.split('(')
                exp = 'for(int '+t[1]+' = 0;'+t[1]+' < '+r[1]+';'+t[1]+'++) {'
                exp = exp + " // " + str(pc) + ': ' + x.replace('\n','')
                txt = txt.replace(x,exp)
                pc = pc + 1
    xe = re.findall("\$.+", txt)
    for x in xe:
        t = x.split(';')
        if t[0].find("+=") >= 0:
            t = t[0].split('+=')
            t[0] = t[0].replace('$','')
            if not re.findall('".+"',t[1]): # if not a string
                exp = t[0] + '+=' + t[1]
                exp = exp + "; // " + str(pc) + ': ' + x
                txt = txt.replace(x,exp)
            else:
                exp = 'strcat('+t[0]+','+t[1]+');'
                exp = exp + " // " + str(pc) + ': ' + x
                txt = txt.replace(x,exp)
        else:
            t = t[0].split('=')
            t[0] = t[0].replace('$','')
            if not re.findall('".+"',t[1]): # if not a string
                exp = t[0] + '=' + t[1]
                exp = exp + "; // " + str(pc) + ': ' + x
                txt = txt.replace(x,exp)
            else:
                exp = 'strcpy('+t[0]+','+t[1]+');'
                exp = exp + " // " + str(pc) + ': ' + x
                txt = txt.replace(x,exp)
        pc = pc + 1
    print("max expression found: ",pc)
    return txt

print("Super-c")
# test.sc = super c
inc = "#include <string.h>\r\n"
with open("test.c", mode="r") as file:
    txt = file.read();
with open("test_super.c", mode="w") as file:
    ec = parse(txt)
    file.write(inc+ec)