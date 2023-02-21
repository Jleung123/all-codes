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
		<!-- top link to other pages-->
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
		<!-- end of top link to other pages-->
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
								<li><a href = "products.php" class = "nav-link">Products</a></li>
							</ul>
						</nav>
					</div>
					<div class = "d-inline-block d-xl-none ml-md-0 mr-auto py-3" style = "position: relative; top: 3px;"><a href = "#" class = "site-menu-toggle js-menu-toggle text-black"><span class = "icon-menu h3"></span></a></div>
				</div>
			</div>
		</header>
		<!-- end of header for menu-->
		<section class="site-section bg-light" id="contact-section">
			<div class="container">
				<div class="row mb-5">
					<div class="col-12 text-center">
						<h2 class="text-black h1 site-section-heading">Contact Us</h2>
					</div>
				</div>
				<div class="row">
					<div class="col-md-7 mb-5">
						<form action="#" class="p-5 bg-white">
							<h2 class="h4 text-black mb-5">Contact Form</h2>
							<div class="row form-group">
								<div class="col-md-6 mb-3 mb-md-0">
									<label class="text-black" for="fname">First Name</label>
									<input type="text" id="fname" class="form-control">
								</div>
								<div class="col-md-6">
									<label class="text-black" for="lname">Last Name</label>
									<input type="text" id="lname" class="form-control">
								</div>
							</div>
							<div class="row form-group">
								<div class="col-md-12">
									<label class="text-black" for="email">Email</label> 
									<input type="email" id="email" class="form-control">
								</div>
							</div>
							<div class="row form-group">
								<div class="col-md-12">
									<label class="text-black" for="subject">Subject</label> 
									<input type="subject" id="subject" class="form-control">
								</div>
							</div>
							<div class="row form-group">
								<div class="col-md-12">
									<label class="text-black" for="message">Message</label> 
									<textarea name="message" id="message" cols="30" rows="7" class="form-control" placeholder="Write in your questions or comments here..."></textarea>
								</div>
							</div>
							<div class="row form-group">
								<div class="col-md-12">
									<input type="submit" value="Send Message" class="btn btn-primary btn-md text-white">
								</div>
							</div>
						</form>
					</div>
					<div class="col-md-5">
						<div class="p-4 mb-3 bg-white">
							<p class="mb-0 font-weight-bold">Address</p>
							<p class="mb-4">1600 Pennsylvania Ave NW, Washington, DC 20500</p>
							<p class="mb-0 font-weight-bold">Phone</p>
							<p class="mb-4"><a href="#">646 123 9876</a></p>
							<p class="mb-0 font-weight-bold">Email Address</p>
							<p class="mb-0"><a href="#">jeremy.leung@stu.bmcc.cuny.edu</a></p>
						</div>
					</div>
				</div>
			</div>
		</section>
			<!-- end of display message for index page --> 
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
		<script src = "js/main.js"></script>
		<!-- end of site-wrap -->
	</body>
</html>