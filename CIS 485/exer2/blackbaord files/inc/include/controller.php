<?php
if(isset($_GET['num']))$num=$_GET['num'];
else $num=null;
if($num==null)
{
	include('inc.html');
}
else
{
	include('inc.php');
}
?>