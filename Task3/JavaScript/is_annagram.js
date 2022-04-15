function IsAnagram(string1, string2){
  if(!(string1.length == string2.length)){
  return false}
  var obj1 = {};
  for(item of string1){
    obj1[item] ? obj1[item]++ : obj1[item] = 1;}
  console.log(obj1);
	for(var i=0; i< string2.length; i++){
    var letter = string2[i];
    if(!obj1[letter]){
      return false;
    								}else{
            obj1[letter] -=1;
                    }
  }
 																			
}
console.log(IsAnagram("nani", "inna"));