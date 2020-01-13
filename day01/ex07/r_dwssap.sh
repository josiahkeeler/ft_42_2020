#!/bin/sh
cat /etc/passwd | cut -d ':' -f 1 | grep -v '#' | sed -n 'n;p' | rev | sort -r | awk "NR>=$FT_LINE1&&NR<=$FT_LINE2" | tr '\n' ' ' |sed 's/ /, /g' | sed 's/..$/./g' | tr -d '\n'
