<?php
	include('library.php');
	
	if(isset($_GET["choice"])) $choice = $_GET["choice"];
	else $choice = null;
	
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
		$num = $_GET["len"];
		$wid = $_GET["wid"];
		validate("width", $wid);
		validate("Length", $num);
	}
	
	if($choice == null)
	include('rectangle21.php');
	else
	{
		$len = $_GET['len'];
		$wid = $_GET['wid'];
		include('rectangle2.php');
	}
?>