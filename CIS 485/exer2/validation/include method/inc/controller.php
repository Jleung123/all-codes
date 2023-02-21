<?php
include('library.php');

$num = readValue("num");
$choice = readValue("choice");

if ($choice == "Enter" && !isInteger($num))
{
	$choice = null;
	$errormsg = "Error: Value is not valid";
}
if ($choice == null)
{
	include('inc1.php');
}
else
{
	include('inc2.php');
}
?>