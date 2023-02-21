<?php
	include("library.php");
	if(isset($_GET['choice'])) $choice = $_GET['choice']; 
	else $choice = null;
	{
		$cname = $cvalue = $cname2 = $cvalue2 = $cname3 = $cvalue3 = '';
	}
	if($choice == 'setCookie')
	{
		$cname = $_GET['cname'];
		$cvalue = $_GET['cvalue'];
		$expiration = time() + 60 * 60 * 24 * 1;
		setcookie($cname, $cvalue, $expiration, "/");
	}
	else if ($choice == 'getCookie')
	{
		$cname2 = $_GET['cname2'];
		$cvalue2 = $_COOKIE[$cname2];
	}
	else if($choice == 'delCookie')
	{
		$cname3 = $_GET['cname3'];
		$expiration = time() + 60 * 60 * 24 * (-1);
		setcookie($cname3, "", $expiration, "/");
	}
	else if ($choice == 'delAllCookies')
	{
		$past = time() - 1;
		foreach ($_COOKIE as $name => $value)
		{
			setcookie($name, $value, $past, "/");
		}
	}
	else if ($choice == 'rawCookie')
	{
		$cvalue3 = print_r($_COOKIE, true);
	}
?>
<!DOCTYPE html>
<html>
	<head>
		<style>
			table,td,input[type = 'button'],input[type = 'text'],textarea{border: solid black 2px; font-size: small;}
			.division{border: solid black 2px; background-color: #CCCCCC; margin: 2px; padding: 1px; font-size: small;}
			th{text-align: center; background: black; color: white; padding: 4px;}
			div.v0{width: 100%;}
			div.v1{width: 50%; margin: 0px auto; background-color: #EEEEEE;}
		</style>
		<title>PHP COOKIE MANAGER</title>
	</head>
	<body>
		<div class = 'v0'>
			<div class = 'v1'>
				<div class = 'division' style = 'font-size:1.5em; text-align: center; background: black; color: white;'>PHP COOKIE MANAGER</div>
				<div class = 'division'>
					<form action = 'cookiemanager.php' method = 'get'>
						<?php echo "
							Name: <input name = 'cname' value = '$cname' type = 'text' size = '10'>
							Value: <input name = 'cvalue' value = '$cvalue' type = 'text' size = '10'>";
						?>
						<input type = 'submit' name = 'choice' value = 'setCookie'/>
						<input type = 'submit' value = 'Clear' />
					</form>	
				</div>
				<div class = 'division'>
					<form action = 'cookiemanager.php' method = 'get'>
						<?php echo "
							Name:<input name = 'cname2' value = '$cname2' type = 'text' size = '10'>
							Value:<input name = 'cvalue2' value = '$cvalue2' type = 'text' size = '10'>";
						?>
						<input type = 'submit' name = 'choice' value = 'getCookie' />
						<input type = 'submit'value = 'Clear' />
					</form>
				</div>
				<div class = 'division'>
					<form action = 'cookiemanager.php' method = 'get'>
						<?php
							echo "Name:<input name = 'cname3' type = 'text' size = '10'>";
						?>	
						<input type = 'submit' name = 'choice' value = 'delCookie' />
						<input type = 'submit' name = 'choice' value = 'delAllCookies' />
						<input type = 'submit' value = 'Clear' />
					</form>
				</div>
				<div class = 'division'>
					<form action = 'cookiemanager.php' method = 'get'>
						<table style = 'border: solid blue 0px;'>
							<tr>
								<td style= 'border:solid blue 0px;'>
									<?php
										echo "<textarea cols = '40' rows = '5'>$cvalue3</textarea></td>";
									?>	
									<td style = 'border:solid blue 0px;'>
									<input type = 'submit' name = 'choice' value = 'rawCookie' />
									<input type = 'submit' value = 'Clear'/>
								</td>
							</tr> 
						</table>
					</form>
				</div>
				<div class = 'division'>
					<?php
						echo "<table style = 'width: 50%;'><tr><th colspan = '2'>COOKIE LISTING</th></tr>
							<tr><th>COOKIE</th><th>VALUE</th></tr>";
						foreach ($_COOKIE as $name => $value )
						{
							echo "<tr><td style = 'width: 10;'>".$name."</td><td style = 'width: 10;'>".$value."</td></tr>";
						}
						echo "</table>";
					?>
				</div>
			</div>
		</div>
	</body> 
</html>
