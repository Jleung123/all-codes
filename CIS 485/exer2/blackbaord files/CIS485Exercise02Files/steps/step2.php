<html>
<head><title>STEP2</title><link rel="stylesheet" type="text/css" href="steps.css" /></head>
<body>
<div class="block">
<?php
$choice=$_GET["input1"];
if($choice=="A") 
{ 
   echo "<form action='step4.php' method='get'>";
   echo "<input type='hidden' name='input1' value='5'/>";
}
else  
if($choice=="B") 
{
   echo "<form action='step3.php' method='get'>";
   echo "<input type='hidden' name='input1' value='1'/>";
}
else
{
  echo "<form action='index.php' method='get'>";
}
?> 
ENTER INPUT2(1-10) : <input type='text' name='input2' size='3'>
<input type="submit" value="ENTER"/>
</form>
</div></body></html>
