function b1(){    
   var text1="Hey there !\n" ;
   var text2="Thanks for coming here ...";  
   var text3=text1 + text2;
   localStorage.setItem("Text",text3);
   console.log(localStorage.getItem("text"));
}
function b2(){
   var today= new Date();
   var time= today.getHours() + ":" + today.getMinutes() + ":" + today.getSeconds();
   var t1= document.getElementById("currentTime").value= time;
     alert("The Current Time(GMT+5.30) :"+t1);
  
}

function b3(){
   document.body.style.backgroundColor="#f3f3f3";
   document.body.style.backgroundImage="url('https://64.media.tumblr.com/c041a3d8036e094a51a955f6a12e5f9d/tumblr_inline_ok2yqpM0581rdhd0n_500.jpg')";   
}
function b5(){
   window.open("_blank");
}
function b6(){
   console.log("I DID IT");
}




 




 


