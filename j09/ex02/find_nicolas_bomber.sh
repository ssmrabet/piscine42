cat $1 | grep -i "Nicolas\tBomber" | cut -d "	" -f3 | awk -F '[^0-9]*' '$1'
