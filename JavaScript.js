var p = new Promise(function(resolve, reject){
for(var i=0;i<101;i++){
console.log(i);

}
if (i=100){
return resolve();
}
else{
return reject()
}
})

p.then(function(){
setTimeout(function(){},Math.random()*5000)
}).catch(function(){
console.log("You Failed");
})