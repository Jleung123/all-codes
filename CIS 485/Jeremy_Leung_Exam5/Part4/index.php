<?php
	include('library.php');
	
	$choice = readValue('choice');
	
	function validate($name, $value)
	{
		global $error;
		global $choice;
		if(!isNumber($value))
		{
			$choice = null;
			$error = $name.' is not valid.';
		}
	}
	
	if($choice != null)
	{
		$num1 = readValue('num1');
		$num2 = readValue('num2');
		validate("Number 1", $num1);
		validate("Number 2", $num2);
	}
	
	if($choice == null) include('view/sumdiffprod21.php');
	else
	{
		$num1 = readValue('num1');
		$num2 = readValue('num2');
		include('view/sumdiffprod22.php');
	}
?>