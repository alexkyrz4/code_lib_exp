#! /bin/sh
#
# Usage: math n1 op n2
#
case $2 in
	+) echo "Addition requested."
		echo "$1 + $3 = `expr $1 + $3`" ;;
	-) echo "Substraction requested."
		echo "$1 - $3 = `expr $1 - $3`" ;;
	\*) echo "Multiplication requested."
		echo "$1 * $3 = `expr $1 \* $3`" ;;
	/) echo "Division requested."
		echo "$1 / $3 = `expr $1 / $3`" ;;
	%) echo "Modulo arithmetic requested."
		echo "$1 % $3 = `expr $1 % $3`" ;;
	*) echo "Unknown operation specified." ;;
esac
