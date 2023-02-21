<?php
	if(isset($_GET['state'])) $state = $_GET['state'];
	else $state = null;
	
	if($state == null)
	{
		include('step1.html');
	}
	else if($state == "2")
	{
		$input1= $_GET["input1"];
		include('step2.php');
	}
	else if($state == "3")
	{
		$input1= $_GET["input1"];
		$input2= $_GET["input2"];
		include('step3.php');
	}
	else if($state == "4")
	{
		$input1= $_GET["input1"];
		$input2= $_GET["input2"];
		include('step4.php');
	}
?>