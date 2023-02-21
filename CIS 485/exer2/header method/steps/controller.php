<?php
	if(isset($_GET['state'])) $state = $_GET['state'];
	else $state = null;
	
	if($state == null)
	{
		header('Location: step1.html');
	}
	else if($state == "2")
	{
		$input1= $_GET["input1"];
		header("Location: step2.php?input1=$input1");
	}
	else if($state == "3")
	{
		$input1= $_GET["input1"];
		$input2= $_GET["input2"];
		header("Location: step3.php?input1=$input1&input2=$input2");
	}
	else if($state == "4")
	{
		$input1= $_GET["input1"];
		$input2= $_GET["input2"];
		header("Location:step4.php?input1=$input1&input2=$input2");
	}
?>