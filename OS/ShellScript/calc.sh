echo -n "Enter the two operands :"
read a b
echo -n "Enter the operator in order( + , - , * , / ) : "
read c
case $c in
1) result=$((a + b)) ;;
2) result=$((a - b)) ;;
3) result=$((a * b)) ;;
4) result=$((a / b)) ;;
*) 	echo "Invalid operator choice! "
	return 1 ;;
esac
echo "The result is : $result "
