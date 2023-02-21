<?php
    $choice=$_GET['choice'];
    if ($choice==null || $choice=='Clear') $cname=$cvalue=$cname2=$cvalue2=$cname3=$raw="";
    else if ($choice=='setcookie')
    {
		$cname=$_GET['cname'];
		$cvalue=$_GET['cvalue'];
		$expiration=time()+60*60*24* 1;
		setcookie($cname,$cvalue,$expiration,'/');
		//header("Refresh:0");
		header("Location: cookiemanager.php");
	}
	else if ($choice == 'getcookie')
	{
		$cname2 = $_GET['cname2'];
		$cvalue2 = $_COOKIE[$cname2];
	}
	else if($choice=='delcookie')
	{
		$cname3=	$_GET['cname3'];
		$expiration=time()+60*60*24* (-1);
		setcookie($cname3,'',$expiration);
		setcookie($cname3,'',$expiration,'/');
		unset($_COOKIE[$cname3]);
		header("Location: cookiemanager.php");
	}
	else if($choice=='displayraw')
	{
		$raw=print_r($_COOKIE,true);
	}
	else if($choice=='deleteall')
	{
		$past = time() - 1;
		foreach ( $_COOKIE as $name => $value )
		{
			setcookie( $name, $value, $past,'/');
		}
		header("Location: cookiemanager.php");
	}
?>
<html>
<head>
<style type='text/css'>
form{margin:0; border:0; padding:0;}
table,td,input[type='button'],input[type='text'],input[type='submit'],input[type='reset']{border:solid black 2px;font-size:small;}
.division{border:solid black 2px;background-color:#CCCCCC;margin:2px;padding:1px;font-size:small;}
th{text-align:center;background:black; color:white;padding:4px;}
div.v0{ width:100%;}
div.v1{ width:50%; margin:0px auto; background-color:#EEEEEE;}
</style>
<title>COOKIE MANAGER</title>
</head>
<body>
<div class='v0'><div class='v1'>
	<div class='division' style='font-size:1.5em;text-align:center;background:black; color:white;'>COOKIE MANAGER</div>
	<div class='division'>
		<form action='cookiemanager.php' method='get'>
		<?php
			echo "Name:		<input name='cname'  value='$cname'		type='text' size='10'>";
			echo "Value: 	<input name='cvalue' value='$cvalue'	type='text' size='10'>";
		?>
		<input type='hidden' name='choice'   value='setcookie' />
		<input type='submit' name='button'	 value='Set Cookie' />
		<input type='submit' name='choice'	 value='Clear' />
		</form>
	</div>
	<div class='division'>
		<form action='cookiemanager.php' method='get'>
		<?php
			echo "Name:		<input name='cname2'  value='$cname2'		type='text' size='10'>";
			echo "Value: 	<input name='cvalue2' value='$cvalue2'	type='text' size='10'>";
		?>		
		<input type='hidden' name='choice'   value='getcookie' />
		<input type='submit' value='GetCookie' />
		<input type='submit' name='choice' value='Clear' />
		</form>
	</div>
	<div class='division'>
		<form action='cookiemanager.php' method='get'>
		<?php
			echo "Name:		<input name='cname3'  value='$cname3'		type='text' size='10'>";
		?>	
		<input type='hidden' name='choice'   value='delcookie' />
		<input type='submit' value='DelCookie' />
		<input type='submit' name='choice' value='Clear' />
		</form>
	</div>
	<div class='division'>
		<form action='cookiemanager.php' method='get'>
		<?php
		  echo "<textarea cols='50' rows='10'>$raw</textarea>";
		?>
		<input type='hidden' name='choice'   value='displayraw' />
		<input type='submit' value='RawCookie'  />
		<input type='submit' name='choice' value='Clear' />
		</form>
	</div>
	
<div id='info' class='division'>
<?php
	//$x="<table style='width:50%;'><tr><th colspan='2'>COOKIE LISTING</th></tr>";
	//$x+="<tr><th>COOKIE</th><th>VALUE</th></tr>";
	//foreach ($_COOKIE as $name => $value )
	//{
	//	$x+="<tr><td style='width:10;'>".$name."</td><td style='width:10;'>".$value."</td></tr>";
	//}
	//$x+="</table>";
	//print $x;
	
	echo "<table style='width:50%;'><tr><th colspan='2'>COOKIE LISTING</th></tr>";
	echo "<tr><th>COOKIE</th><th>VALUE</th></tr>";
	foreach ($_COOKIE as $name => $value )
	{
		echo "<tr><td style='width:10;'>".$name."</td><td style='width:10;'>".$value."</td></tr>";
	}
	echo "</table>";
?>
</div>

<div class='division'>
		<form action='cookiemanager.php' method='get'>
		<input type='hidden' name='choice'   value='deleteall' />
		<input type='submit' value='Delete All Cookie'  />
		</form>
</div>

</body> 
</html>
