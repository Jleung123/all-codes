function one()
{
	var x=document.getElementById("side");
	var y=document.getElementById("area");
	y.value=parseFloat(x.value)*parseFloat(x.value);
}
function two()
{
	var x=document.getElementById("side");
	var y=document.getElementById("perimeter");
	y.value=4*parseFloat(x.value);
}
function three()
{
	one();	two();
}