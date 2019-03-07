cat /etc/passwd | sed -e 'n;p' | grep -v '#' | cut -d ':' -f 1 | rev | sort -r | sed -n 'n;p' | tr '\n' ', '
