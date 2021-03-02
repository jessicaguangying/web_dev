<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<title></title>
	</head>
	<body>
		<script>
			// function sum(n){
			// 	var res = 0;
			// 	for(var i = 1; i <= n; i++){
			// 		res += i;
			// 	}
			// 	return res;
			// }
			// alert(sum(100));
			
			
			// var num = 100;
			// var sum = 0;
			// for(var i = 1; i <= num; i++){
			// 	sum += i;
			// }
			// alert(sum);
			
			// function sum(n){
			// 	if(n == 1){
			// 		return 1;
			// 	}
			// 	return sum(n - 1) + n;
			// }
			// alert(sum(100));
			
			
			// function rabbit(n){
			// 	if(n < 4){
			// 		return 1;
			// 	}
			// 	return rabbit(n-1) + rabbit(n-3);
			// }
			// alert(rabbit(24));
			
			
			// var arr = Array(10); 
			// alert(arr);
			
			// var arr = [100, true, "hello"]
			// alert(arr.length);
			// alert(arr[1]);
			
			
			// var arr = [100, true, "hello"]
			// for(i = 0; i < arr.length; i++){
			// 	document.write(arr[1] + " &nbsp;" + arr[2]);
			// }
			
			// document.write(Math.random());
			
			// document.write(parseInt(Math.random() * 10));
			
			// var arr = new Array(10);
			// for(i = 0; i < arr.length; i++){
			// 	arr[i] = (parseInt(Math.random() * 10));
			// }
			// alert(arr);
			
			// var arr = [10,20,30,50,15]
			// for(i = 0; i <= arr.length; i++){
			// 	if(arr[0] < arr[i]){
			// 		alert(arr[1]);
			// 	}
			// }
			
			// var arr = [10,20,30,50,15]
			// 	for(i = 0; i <= arr.length; i++){
			// 		document.write(arr[i] + "<br/>")
			// 	}
			
			/*
				
			var arr = [10,20,30,50,15]
				for(var i in arr){
					document.write(arr[i] + "<br/>")
				}
			*/
					   
		   for(i = 10000; i < 100000; i++){
			   var a = i % 10;
			   var b = parseInt(i / 10) % 10;
			   var c = parseInt(i / 100) % 10;
			   var d = parseInt(i / 1000) % 10;
			   var e = parseInt(i / 10000);
			   var count = 0;
			   if (a == e && b == d){
				   document.write(i + ",")
				   count++;
				   if(count % 5 == 0){
					   document.write("#");
				   }  
			   }
		   }
		   
			
			
			
		</script>
	</body>
</html>
