function one()
{
	var x=document.getElementById("len");
	var y=document.getElementById("wid");
	var z=document.getElementById("area");
	z.value=parseFloat(x.value) * parseFloat(y.value);
}
function two()
{
	var x=document.getElementById("len");
	var y=document.getElementById("wid");
	var z=document.getElementById("perimeter");
	z.value=2*parseFloat(x.value) + 2*parseFloat(y.value);

}
function three()
{	
	one();two();
}