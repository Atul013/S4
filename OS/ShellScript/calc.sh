echo -n "Enter operand 1 : "
read n1
echo -n "Enter operand 2 : "
read n2
echo -n "1. Addition
2. Subtraction 
3. Multiplication 
4. Division 
Enter your choice : "
read op
case $op in
1) result=$((n1 + n2)) ;;
2) result=$((n1 - n2)) ;;
3) result=$((n1 * n2)) ;;
4) if [ $n2 -ne 0 ]; then 
    result=$((n1 / n2)) 
   else
    echo "Division by zero is not allowed! " ; exit 1
fi ;;
*) echo "Invalid operator choice! " ; exit 1 ;;
esac
echo "Result : $result"
