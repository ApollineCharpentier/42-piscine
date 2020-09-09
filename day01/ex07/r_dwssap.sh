cat /etc/passwd | grep -v '#' | awk '{if((NR+1)%2)print$0}' | cut -d ":" -f1 | rev | sort -r | sed -n "$FT_LINE1 , $FT_LINE2 p" | tr '\n' ',' | rev | sed 's/,/./' | sed 's/,/ ,/g' | rev | tr -d "\n"
