 int s=0,e=A;

    while(s<=e){

        long long int mid=(s+e)/2;

        long long int sqr=mid*mid;

        if(sqr<=A){

            s=mid+1;

        }else{

            e=mid-1;

        }

    }

    return e;
