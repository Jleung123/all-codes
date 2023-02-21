<!DOCTYPE html>
<html>
	<head>
		<title>GRADE3 PROBLEM</title>
		<link rel = "stylesheet" type = "text/css" href = "grade.css" />
		<?php
			if(isset($_GET['choice'])) $choice = $_GET['choice'];
			else $choice = null;
			if($choice == null || $choice == 'Clear')
			{
				$m = $f = $s = $a = $grade = $letter = $temp = $temp2 = "";
			}
			else
			{
				$m = $_GET['midterm'];
				$f = $_GET['final'];
				$s = $_GET['semester'];
				switch ($s)
				{
					case "Fall" : $grade = ((2 * $m) + $f) / 3;
					break;
					case "Spring" : $grade = ($m + (2 * $f)) / 3;
					break;
					case "Summer" : $grade = ($m + $f) / 2;
					break;
				}
				switch($grade)
				{
					case $grade < 65 : $letter = "F";
					break;
					case $grade >= 65 && $grade <= 70 : $letter = "D";
					break;
					case $grade >= 71 && $grade <= 80 : $letter = "C";
					break;
					case $grade >= 81 && $grade <= 90 : $letter = "B";
					break;
					case $grade >= 91 : $letter = "A";
					break;
				}
				if ($choice == "Average")
				{
					$temp = $grade;
					$temp2 = "";
				}
				else if ($choice == "Letter")
				{
					$temp2 = $letter;
					$temp = "";
				}
				else if ($choice == "Both")
				{
					$temp = $grade;
					$temp2 = $letter;
				}
			}
		?>
	</head>
	<body>
		<div id = "main">
			<div id = "main2">
				<form action = "grade3.php" method = "get"/>
					<table>
						<th colspan	=	"2">GRADE3 PROBLEM</th>
						<tr><td><label>Midterm:</label></td>	<td><input name = "midterm" type = "text" /></td></tr>
						<tr><td><label>Final:</label></td>		<td><input name = "final" type = "text" /></td></tr>
						<tr><td><label>Semester:</label></td>	<td><select name = "semester"><option>Fall</option><option>Spring</option><option>Summer</option></select></td></tr>
						<tr><td><label>Average:</label></td>	<td><?php echo "<input value = '$temp' type = 'text' />";?></td></tr>
						<tr><td><label>Letter:</label></td>		<td><?php echo "<input value = '$temp2' type = 'text' />";?></td></tr>
						<tr>
							<td colspan	= "2" >
								<input type = "submit" name = "choice" value = "Average"/>
								<input type = "submit" name = "choice" value = "Letter"/>
								<input type = "submit" name = "choice" value = "Both"/>
								<input type="reset" value="Clear" 	/>
							</td>
						</tr>
					</table> 
				</form>
			</div>
		</div>
	</body>
</html>
