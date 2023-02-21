<?php
	session_name('SessionManager');
	session_start();
	if(isset($_GET['choice'])) $choice = $_GET['choice']; 
	else $choice = null;
	{
		$sid = $sname = $sname2 = $svalue2 = $sname3 = $sraw = $sencode = '';
	}
	switch ($choice)
	{
		case 'Get_Session_ID' :
			$sid = session_id();
		break;
		case 'Get_Session_Name':
			$sid = session_name();
		break;
		case 'Del_Session_Cookie':
			if (ini_get("session.use_cookies"))
			{
				$params = session_get_cookie_params();
				setcookie(
				session_name(),
				'',
				time() - 42000,
				$params["path"],
				$params["domain"],
				$params["secure"],
				$params["httponly"]);
			}
		break;
		case "Set_Session_Data":
			$sname = $_GET['sname'];
			$svalue = $_GET['svalue'];
			$_SESSION["$sname"] = "$svalue";
		break;
		case 'Get_Session_Data':
			$sname2 = $_GET['sname2'];
			$svalue2 = $_SESSION[$sname2];
		break;
		case 'Del_Session_Data':
			$sname3 = $_GET['sname3'];
			unset($_SESSION[$sname3]);
		break;
		case 'Del_All_Session_Data':
			session_unset();
		break;
		case 'Destroy_Session':
			session_destroy();
		break;
		case 'Display_Session_Raw':
			$sraw = print_r($_SESSION, true);
		break;
		case 'Display_Session_Encode':
			$sencode = session_encode();
		break;
	}
?>
<!DOCTYPE html>
<html>
	<head>
		<meta http-equiv = 'Content-Type' content = 'text/html; charset = UTF-8'>
		<title>PHP SESSION MANAGER</title>
		<style type = 'text/css'>
			table, td, input[type = 'button'], input[type = 'submit'], input[type = 'reset'], input[type = 'text'], textarea{border: solid black 2px; font-size: small;}
			.division{border: solid black 2px; background-color: #CCCCCC; margin: 2px; padding: 1px; font-size: small;}
			th{text-align: center; background: black; color: white; padding: 4px;}
			div.v0{width: 100%;}
			div.v1{width: 60%; margin: 0px auto; background-color: #EEEEEE;}
		</style>
	</head>
	<body>
		<div class='v0'>
			<div class='v1'>
				<div class='division' style='font-size:1.5em;text-align:center;background:black; color:white;'>
					PHP SESSION MANAGER
				</div> 
				<div class = 'division'>    
					<form action = 'sessionmanager_form.php' method = 'get'>
						<?php echo "<input value = '$sid' type = 'text' size = '50'/>";?>
						<input type = 'submit' name = 'choice' value = 'Get_Session_ID'/>
						<input type = 'submit' name = 'choice' value = 'Get_Session_Name'/>
						<input type = 'submit' name = 'choice' value = 'Del_Session_Cookie'/>
						<input type = 'reset' value = 'Clear'/>
					</form>
				</div>
				<!-- not working code -->
				<div class = 'division'>
					<form action = 'sessionmanager_form.php' method = 'get'>
						<?php echo 
							"Name: <input name = 'sname' type = 'text' size = '10'/>
							Value: <input name = 'svalue' type = 'text' size = '10' />";
						?>
						<input type = 'submit' name = 'choice' value = 'Set_Session_Data'/>
						<input type = 'reset' value = 'Clear'/>
					</form>
				</div>
				<div class = 'division'>
					<form action = 'sessionmanager_form.php' method = 'get'>
						<?php echo 
							"Name: <input name = 'sname2' type = 'text' size = '10'/>
							Value: <input value = '$svalue2' type = 'text' size = '10'/>";
						?>
						<input type = 'submit' name = 'choice' value = 'Get_Session_Data'/>
						<input type = 'reset' value = 'Clear'/>
					</form>
				</div>
				<!-- end of not working code -->
				<div class = 'division'>
					<form action = 'sessionmanager_form.php' method = 'get'>
						<?php echo 
							"Name: <input name = 'sname3' type = 'text' size = '10'/>";
						?>
						<input type = 'submit' name = 'choice' value = 'Del_Session_Data'/>
						<input type = 'submit' name = 'choice'value = 'Del_All_Session_Data'/>
						<input type = 'submit' name = 'choice' value = 'Destroy_Session'/>
						<input type = 'reset' value = 'Clear'/>
					</form>
				</div>
				<div class = 'division'>
					<form action = 'sessionmanager_form.php' method = 'get'>
						<table style = 'border: solid blue 0px;'>
							<tr>
								<td style = 'border: solid blue 0px;'>
									<?php echo 
									"<textarea cols = '40' rows = '5'>
										$sraw
									</textarea>";
									?>
								</td>
								<td style = 'border: solid blue 0px; text-align: center;'>
									<center>
										<?php echo 
											"<textarea cols = '40' rows = '5'>
												$sencode
											</textarea>";
									?>
									</center>
								</td>
							</tr>
							<tr>
								<td style = 'border: solid blue 0px;'>
									<input type = 'submit' name = 'choice' value = 'Display_Session_Raw'/>
									<input type = 'reset' value = 'Clear'/>
								</td>
								<td style = 'border: solid blue 0px;'>
									<input type = 'submit' name = 'choice' value = 'Display_Session_Encode'/>
									<input type = 'reset' value = 'Clear'/>
								</td>
							</tr>
						</table>
					</form>
				</div>
				<div class = 'division'>
					<?php echo 
						"<table style = 'width: 50%;'>
							<tr><th colspan = '2'>SESSION DATA LISTING</th></tr>
							<tr><th>NAME</th><th>VALUE</th></tr>";
							foreach ($_SESSION as $sname => $svalue )
							{
								echo "<tr><td style = 'width: 10;'>$sname</td><td style = 'width:10;'>$svalue</td></tr>";
							}
						echo "</table>";
					?>
				</div>
			</div>
		</div>
	</body>
</html>