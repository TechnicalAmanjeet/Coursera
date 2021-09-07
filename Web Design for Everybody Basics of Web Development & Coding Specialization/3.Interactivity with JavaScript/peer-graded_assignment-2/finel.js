function billingFunction(){
    if(document.getElementById("same").checked){
      document.getElementById("billingName").value=document.getElementById("shippingName").value;
      document.getElementById("billingZip").value=document.getElementById("shippingZip").value;
      document.getElementById('billingName').setAttribute("required", true);
      
    document.getElementById("billingZip").setAttribute("required", true);
      
    }
    else{
          document.getElementById("billingName").value="";
      document.getElementById("billingZip").value="";
      
      document.getElementById("billingName").removeAttribute("required");
      document.getElementById("billingZip").removeAttribute("required");
      
      
    }
  }