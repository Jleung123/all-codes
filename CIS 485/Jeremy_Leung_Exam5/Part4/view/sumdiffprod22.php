<?php
	include('./model/Calculator.php');
	
	$choice = readValue('choice');

	$num1 = (float)readValue('num1');
	$num2 = (float)readvalue('num2');
	$calculator = new Calculator($num1, $num2);
		
	switch ($choice)
	{
		case 'Sum': echo "Sum = ".$calculator->calcSum();
		break;
		case 'Difference': echo "Difference = ".$calculator->calcDifference();
		break;
		case 'Product': echo "Product = ".$calculator->calcProduct();
		break;
		case 'All': echo "Sum = ".$calculator->calcSum();
					echo "<br>Difference = ".$calculator->calcDifference();
					echo "<br>Product = ".$calculator->calcProduct();
		break;
	}
?>
<br><a href = './index.php'>BACK</a>