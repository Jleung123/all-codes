function are()
{
	var x=document.getElementById("r");
	var y=document.getElementById("area"); 
	y.value=3.13*parseFloat(x.value) * parseFloat(x.value);
}
function per()
{
	var x=document.getElementById("r");
	var y=document.getElementById("circ"); 
	y.value=2*3.13*parseFloat(x.value)
}
function bot()
{
	are(); per();
	
}