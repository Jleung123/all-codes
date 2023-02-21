<!DOCTYPE html>
<html>
	<head>
		<title>Samsung White</title>
		<link href = "https://fonts.googleapis.com/css?family = Quicksand:300,400,500,700,900" rel = "stylesheet">
		<link rel = "stylesheet" href = "fonts/icomoon/style.css">
		<link rel = "stylesheet" href = "css/bootstrap.min.css">
		<link rel = "stylesheet" href = "css/style.css">
	</head>
	<body data-spy = "scroll" data-target = ".site-navbar-target" data-offset = "300">
		<div class = "site-wrap">
			<div class = "site-mobile-menu site-navbar-target">
				<div class = "site-mobile-menu-header">
					<div class = "site-mobile-menu-close mt-3">
						<span class = "icon-close2 js-menu-toggle"></span>
					</div>
				</div>
			<div class = "site-mobile-menu-body"></div>
			</div>   
			<div class = "border-bottom top-bar py-2 bg-dark" id = "home-section">
				<div class = "container">
					<div class = "row"></div>
				</div> 
			</div>
			<!-- header for munu -->
			<header class = "site-navbar py-4 bg-white js-sticky-header site-navbar-target" role = "banner">
				<div class = "container">
					<div class = "row align-items-center">
						<div class = "col-11 col-xl-2">
							<h1 class = "mb-0 site-logo"><a href = "../index.php" class = "text-black h2 mb-0"><span class = "text-primary">Samsung White</span> </a></h1>
						</div>
						<div class = "col-12 col-md-10 d-none d-xl-block">
							<nav class = "site-navigation position-relative text-right" role = "navigation">
								<ul class = "site-menu main-menu js-clone-nav mr-auto d-none d-lg-block">
									<li><a href = "../index.php" class = "nav-link">Home</a></li>
									<li><a href = "about.php" class = "nav-link">About Us</a></li>
									<li><a href = "contact.php" class = "nav-link">Contact Us</a></li>
									<li><a href = "product.php" class = "nav-link">Products</a></li>
								</ul>
							</nav>
						</div>
						<div class = "d-inline-block d-xl-none ml-md-0 mr-auto py-3" style = "position: relative; top: 3px;"><a href = "#" class = "site-menu-toggle js-menu-toggle text-black"><span class = "icon-menu h3"></span></a></div>
					</div>
				</div>
			</header>
			<!-- end of header for menu-->
			<!-- intro artwork for index -->
			<div class = "site-blocks-cover overlay" style = "background-image: url(images/samsung_intro.jpg);" data-aos = "fade" data-stellar-background-ratio = "0.5">
				<div class = "container">
					<div class = "row align-items-center justify-content-center text-center">
						<div class = "col-md-12" data-aos = "fade-up" data-aos-delay = "400">    
							<div class = "row justify-content-center mb-4">
								<div class = "col-md-8 text-center">
									<h1>Register and get yourself a new <span class = "typed-words"></span></h1>
								</div>
							</div>
						</div>
					</div>
				</div>
			</div>
			<!-- end of intro artwork for index -->	
			<!-- display menu for registration page -->
			<section class = "site-section">
				<div class = "container">
					<form>
						<table align = "center">
							<tr>
								<td width = "100">Username:</td>
								<td width = "150" align = "center"><input type = "text" id = "username"></td>
							</tr>
							<tr>
								<td width = "100">Password:</td>
								<td width = "150" align = "center"><input type = "password" id = "password"></td>
							</tr>
							<tr>
								<td width = "100">Re-Type Password:</td>
								<td width = "150" align = "center"><input type = "password" id = "password2"></td>
							</tr>
							<tr>
								<td width = "150" align = "center"><button value = "Register" 
									data-fancybox data-ratio = "2" class = "btn btn-primary btn-md">Register</button></td>
								<td><button value = "Clear" data-fancybox data-ratio = "2" class = "btn btn-primary btn-md">Clear</button></td>
							</tr>
						</table>
					</form>
				</div>
			</section>
			<!-- end of display menu for registration page --> 
			<footer class = "site-footer">
				<div class = "container">
					<div class = "row">
						<div class = "col-md-3">
							<h2 class = "footer-heading mb-4">Subscribe Newsletter</h2>
							<form action = "#" method = "post">
								<div class = "input-group mb-3">
									<input type = "text" class = "form-control border-secondary text-white bg-transparent" placeholder = "Enter Email" aria-label = "Enter Email" aria-describedby = "button-addon2">
									<div class = "input-group-append">
										<button class = "btn btn-primary text-white" type = "button" id = "button-addon2">Send</button>
									</div>
								</div>
							</form>
						</div>
					</div>
					<div class = "row pt-5 mt-5 text-center">
						<div class = "col-md-12">
							<div class = "border-top pt-5">
								<p><!-- Link back to Colorlib can't be removed. Template is licensed under CC BY 3.0. -->
									Copyright &copy;<script>document.write(new Date().getFullYear());</script> All rights reserved | This template is made with <i class = "icon-heart text-danger" aria-hidden = "true"></i> by <a href = "https://colorlib.com" target = "_blank" >Colorlib</a>
								<!-- Link back to Colorlib can't be removed. Template is licensed under CC BY 3.0. -->
								</p>
							</div>
						</div>
					</div>
				</div>
			</footer>
		</div>
		<!-- site-wrap -->
		<script src = "js/jquery-3.3.1.min.js"></script>
		<script src = "js/jquery-migrate-3.0.1.min.js"></script>
		<script src = "js/owl.carousel.min.js"></script>
		<script src = "js/jquery.stellar.min.js"></script>
		<script src = "js/jquery.easing.1.3.js"></script>
		<script src = "js/aos.js"></script>
		<script src="js/typed.js"></script>
            <script>
				var typed = new Typed('.typed-words', {
				strings: ["Phone","Tablet"," Kitchen appliance", "Television"],
				typeSpeed: 80,
				backSpeed: 80,
				backDelay: 4000,
				startDelay: 1000,
				loop: true,
				showCursor: true
				});
            </script>
		<script src = "js/main.js"></script>
		<!-- end of site-wrap -->
	</body>
</html>