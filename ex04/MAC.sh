ifconfig | grep 'ether' | sed 's/\(*.\)ether //g' | tr -d ' ' | cut -c7-
