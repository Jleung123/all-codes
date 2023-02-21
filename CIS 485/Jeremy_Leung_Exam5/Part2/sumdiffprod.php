<?php
	include('Calculator.php');
	
	if(isset($_GET['choice'])) $choice = $_GET['choice'];
	else $choice = null;
	if($choice == null || $choice == 'Clear')
	{
		$num1 = $num2 = '';
	}
	else
	{	
		$num1 = (float)$_GET['num1'];
		$num2 = (float)$_GET['num2'];
		$calculator = new Calculator($num1, $num2);
		
		switch ($choice){
			case 'Sum': echo "Sum = ".$calculator->calcSum();
			break;
			case 'Difference': echo "Difference = ".$calculator->calcDifference();
			break;
			case 'Product': echo "Product = ".$calculator->calcProduct();
			break;
			case 'All': echo "Average = ".$calculator->calcSum();
						echo "<br>Difference = ".$calculator->calcDifference();
						echo "<br>Product = ".$calculator->calcProduct();
			break;
		}
	}
?>
<br><a href = 'sumdiffprod.html'>BACK</a>