<!DOCTYPE html>
<html><head><title>Rectangle</title></head><body>
	
<?php
include('library.php');
include('Rectangle.php');

$choice=readValue('choice');
$len=readValue('len');
$wid=readValue('wid');

$y=new Rectangle($len,$wid);

if ($choice=="Area") echo " Area=".$y->getArea();
else echo " Perimeter=".$y->getPerimeter();
?>
<br><a href="rectangle.html">Back</a> 
</body>
</html>
