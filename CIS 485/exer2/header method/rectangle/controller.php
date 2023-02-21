<?php
	if(isset($_GET["choice"])) $choice = $_GET["choice"];
	else $choice = null;
	if($choice == null)
	header('Location: rectangle2.html');
	else
	{
		$len = $_GET['len'];
		$wid = $_GET['wid'];
		header("Location: rectangle2.php?len=$len&wid=$wid&choice=$choice");
	}
?>