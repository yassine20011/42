#!/bin/sh
cat /etc/passwd | grep -v "#" | sed -n "n;p" | cut -d ":" -f1 | rev | sort -r | sed -n -e "$FT_LINE1,${FT_LINE2}p" | sed 's/$/,/g' | tr '\n' ' ' | sed 's/, $/./'| tr -d '\n'
