for(i = 2; i <= n; i++) {
            b = a[i];
            for(j = i - 1; i >= 1; i--){
                  if(a[i] < a[j])
                        a[j + 1] = a[j];   
            }
            a[j + 1] = b;
      }