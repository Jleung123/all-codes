<html>
<head><title>STEP4</title><link rel="stylesheet" type="text/css" href="steps.css" /></head>
<body>
<div class="block">
<?php
$xf="1"+$_GET["input1"];
$xz="2"+$_GET["input2"];
$xaq=(int)$xf;
$xax=(int)$xz;
if($xaq>$xax) {$xaq=$xaq+33;$xax=$xax+31;}
else {$xaq=$xaq+2;$xax=$xax+44;}
echo "<div class='output'>OUTPUT: ";
echo "$xf.$xaq.$xax.$xz";
echo "</div>";
?>
<div class="note">NOTE: MAKE SURE TO COPY/WRITE THE OUTPUT</div>
<a href="step1.html">RESTART</a> 
</div></body></html>
