<?php
if(isset($_GET['num']))$num=$_GET['num'];
else $num=null;
if($num==null)
{
	header('Location: inc.html');
}
else
{
	header("Location: inc.php?num=$num");
}
?>