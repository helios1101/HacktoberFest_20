function merge(list1, list2){
  var finalArr = [];
  var j=0;
  var i=0;
  while(i < list1.length && j < list2.length){
        if(list1[i] > list2[j]){
          finalArr.push(list2[j]);
        j++;}
  			else{
          finalArr.push(list1[i]);
        i++;} 
  			}
    while(i < list1.length){
  			finalArr.push(list1[i]);
    			i++;}
		while(j < list2.length){
  			finalArr.push(list2[j]);
    			j++;} 
  return finalArr;
  }



function mergeSort(list){
  if(list.length <= 1 ){return list}
  var midPoint = Math.floor(list.length/2);
  var arrLeft = mergeSort(list.slice(0,midPoint));
  var arrRight = mergeSort(list.slice(midPoint));
  return merge(arrLeft, arrRight);
}
mergeSort([10,22,45,88,101,2,0,89,70,12,32,44,62,21]);
  