<?php
include('library.php');

$num = readValue("num");
$choice = readValue("choice");
$errormsg = "";

if ($choice == "Enter" && !isInteger($num))
{
	$choice = null;
	$errormsg = urlencode('Error: Value is not valid');
}

if ($choice == null)
{
	header("Location: inc1.php?errormsg=$errormsg");
}
else
{
	header("Location: inc2.php?num=$num");
}

?>