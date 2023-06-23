public class Main {
    public static void main(String[] Args){

        int alturas []= {1,8,6,2,5,4,8,3,7};
        System.out.println("The maximum possible area is: "+ maxArea(alturas));
    }
    
    public static int maxArea(int alturas[]){
        int izquierda= 0;
        int derecha= alturas.length - 1;
        int maxArea= 0;

        while (izquierda < derecha){
            int areaActual= (derecha-izquierda) * Math.min(alturas[izquierda], alturas[derecha]);
            maxArea= Math.max(areaActual, maxArea);
            if(alturas[izquierda]<alturas[derecha]){
                izquierda+=1;
            }else{
                derecha-=1;
            }
        }



        return maxArea;
    }

}