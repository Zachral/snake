int countiousMovementX(int lastX, int x){
       if(x > lastX) return x + 1;
       else if(x < lastX) return x - 1;
       else return x; 
}

int countiousMovementY(int lastY, int y){
       if(y > lastY) return y + 1;
       else if(y < lastY) return y - 1;
       else return y; 
}