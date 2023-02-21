<html>
<head><title>STEP2</title><link rel="stylesheet" type="text/css" href="steps.css" />
<script>
function isInteger()
{
	var elem=document.getElementById("input2");
	var value="";
	if(elem.value !=null) value=elem.value.trim();	 
	if 	(value==null || value=="") 	{ alert("Integer Field Empty");return false;}
	else if (value==" ") 			{ alert("Space is not Valid");return false;}
	else if (isNaN(value)) 			{ alert("Value Not A Number");return false;}
	else if ((parseFloat(value))%1 !=0 ) 	{ alert("Number Is Not An Integer");return false;}
	else if(value<1 || value>10) 	{ alert("Value must be between 1 - 10");return false;}
	return true;
}
</script>
</head>
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
ENTER INPUT2(1-10) : <input type='text' id='input2' name='input2' size='3'>
<input type="submit" value="ENTER" onclick="return isInteger();" />
</form>
</div></body></html>
