<?php
	if(isset($_GET["choice"])) $choice = $_GET["choice"];
	else $choice = null;
	if($choice == null)
	header('rectangle2.html');
	else
	{
		$len = $_GET['len'];
		$wid = $_GET['wid'];
		header('rectangle2.php');
	}
?>