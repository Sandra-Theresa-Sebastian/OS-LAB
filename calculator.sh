echo "CALCULATOR"
echo "1.Addition"
echo "2.Subtraction"
echo "3.Multiplication"
echo "4.Division"

echo "Enter the first number: "
read num1
echo "Enter the second number: "
read num2
echo "Choose your option: "
read op
case $op in
	1)rs=$(($num1+num2))
	echo "Sum= "$rs;;
	2)rs=$(($num1-num2))
	echo "Difference= "$rs;;
	3)rs=$(($num1*num2))
	echo "Product= "$rs;;
	4)rs=$(($num1/num2))
	echo "Quotient= "$rs;;
	*)echo "INVALID";;
esac

