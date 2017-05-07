#!/usr/bin/env ruby
s=gets.chomp.split
m=s.length
n=s[m-1].length
if(s[m-1]=="?" or s[m-1][n-1]=='?') then puts("7")
else 
    flag=false
    for i in 0..m
        flag|=(s[i]=="Sussu" or s[i]=="Sussu." or s[i]=="Sussu!")
    end
    if(flag) then  puts("AI SUSSU!")
    else 
        puts("O cara é bom!")
    end
end
