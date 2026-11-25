#include<iostream>
#include<climits>
using namespace std;












int main(){


        int n;
        cin >> n;


        // int arr[n];
        // // int on = 0;
        // int en = 0;


        // for(int i=0; i<n; i++){

        //     cin >> arr[i];

        //     if(arr[i] % 2 == 0){
        //         en++;
        //     }
        //     else{
        //         on++;
        //     }


        // }


        // cout << on << " " << en;


        // int mx = INT_MIN;
        // int mn = INT_MAX;
        // for(int i=0; i<n; i++){

        //     cin >> arr[i];

        //     mx = max(mx, arr[i]);

        //     mn = min(mn, arr[i]);

        // }


        // cout << mx << "+" << mn << "=" << mx+mn; 

        // for(int i=0; i<n; i++){


        //     cin >> arr[i];

        //     // Reverse the array 
        //     }

        //     for(int i=0; i<n/2; i++){
            
            
        //     int temp = arr[i];
        //     arr[i] = arr[n-1-i];
        //     arr[n-1-i] = temp;
          
        //    }


        //    for(int i=0; i<n; i++){

        //     cout << arr[i] << " ";
        //    }


            // int a,b;
            // cin >> a >> b;

            // int a[n];
            // int b[n];

            // int mn1 = INT_MAX;
            
            // int mn2 = INT_MAX;



            // for(int i=0; i<n; i++){
            //     cin >> a[i];

            //     mn1 = min(mn1,a[i]);
            // }

            // for(int i=0; i<n; i++){
            //     cin >> b[i];

            //     mn2 = min(mn2, b[i]); 
            // }

            // cout << mn1+mn2 << endl;

            // Missing Number

        //     int xor1 = 0;
        //     int xor2 = 0;

        //     int arr[n];

        //     for(int i=0; i<n; i++){
        //         cin >> arr[i];
        //     }
        //     for(int i=0; i<n; i++){

        //         xor1 = xor1 ^ arr[i];
        //         xor2 = xor2 ^ (i+1);

        //     }


        //  cout <<  (xor1 ^ xor2);

        //  Prefix & Suffix

        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int prefix[n];
        int suffix[n];

        prefix[0] = INT_MIN;
        suffix[n-1] = INT_MAX;


        for(int i=1; i<n; i++){

            prefix[i] = max(prefix[i-1], arr[i-1]);
        }

        for(int i=n-2; i>=0; i--){
            suffix[i] = min(suffix[i+1], arr[i+1]);
        }


        for(int i=1; i<n-1; i++){

            if(prefix[i] < arr[i]  && arr[i] < suffix[i]){
                cout << arr[i];
            }
        }



        return -1;

}