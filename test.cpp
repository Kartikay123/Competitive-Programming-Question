// // // // #include <bits/stdc++.h>
// // // // using namespace std;

// // // // int main()
// // // // {
// // // //     int a[][2] = {{1,2},{3,4}};
// // // //     int i, j;
// // // //     for (i = 0; i < 2; i++)
// // // //         for (j = 0; j < 2; j++)
// // // //             printf("%d ", a[i][j]);
// // // //     return 0;
// // // // }
// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // int main()
// // // {
// // //    char str1[] = "GeeksQuiz";
// // //    char str2[] = {'G', 'e', 'e', 'k', 's', 'Q', 'u', 'i', 'z'};
// // //    int n1 = sizeof(str1)/sizeof(str1[0]);
// // //    int n2 = sizeof(str2)/sizeof(str2[0]);
// // //    cout << n1 << " "<< n2;
// // //    return 0;
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // int fun(char *str1)
// // {
// //   char *str2 = str1;
// //   while(*++str1);
// //   return (str1-str2);
// // }
 
// // int main()
// // {
// //   char *str = "GeeksQuiz";
// //   cout << fun(str);
// //   return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     char str[20] = "GeeksQuiz";
//     cout << sizeof(str);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
// 	string s1="Hello";
// 	string s2="World";
	
// 	cout<<s1+s2<<endl;
	
// 	return 0;
// }
// int main()
// {
//     int arri[] = {1, 2 ,3};
//     int *ptri = arri;
 
//     char arrc[] = {1, 2 ,3};
//     char *ptrc = arrc;
 
//     cout << "sizeof arri[] = " << sizeof(arri) << " ";
//     cout << "sizeof ptri = " << sizeof(ptri) << " ";
 
//     cout << "sizeof arrc[] = " << sizeof(arrc) << " ";
//     cout << "sizeof ptrc = " << sizeof(ptrc) << " ";
 
//     return 0;
// }
// int main()
// {
//     float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//     float *ptr1 = &arr[0];
//     float *ptr2 = ptr1 + 3;
 
//     cout << *ptr2 << " ";
//     cout << ptr2 - ptr1;
 
//    return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//  int var;  /*Suppose address of var is 2000 */
 
//  void *ptr = &var;
//  *ptr = 5;
//  cout << var << " " << *ptr;
              
//  return 0;
// }
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int array[5][5];
//     cout<<(((void*)array==*array)&&(*array==array[0]));
//     return 0;
// }
// int main()
// {
// 	int a = 1, *b=&a, **c=&b;
// 	a = 4;
// 	**c = 5;
	
// 	cout<<a;
// 	return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     struct site
//     {
//         char name[] = "GeeksQuiz";
//         int no_of_pages = 200;
//     };
 
//     struct site *ptr;
//     cout << ptr->no_of_pages << " " << ptr->name <<endl;
//     return 0;
// }