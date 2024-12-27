//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    system("chcp 1251>null");
//    int M, N;
//    cout << "¬вед≥ть розм≥р масиву A: ";
//    cin >> M;
//    cout << "¬вед≥ть розм≥р масиву B: ";
//    cin >> N;
//
//    int* A = new int[M];
//    int* B = new int[N];
//
//    cout << "¬вед≥ть елементи масиву A: ";
//    for (int i = 0; i < M; ++i) {
//        cin >> A[i];
//    }
//
//    cout << "¬вед≥ть елементи масиву B: ";
//    for (int i = 0; i < N; ++i) {
//        cin >> B[i];
//    }
//
//    int* result = new int[M];
//    int resultSize = 0;
//
//
//    for (int i = 0; i < M; ++i) {
//        bool found = false;
//        for (int j = 0; j < N; ++j) {
//            if (A[i] == B[j]) {
//                found = true;
//                break;
//            }
//        }
//        if (!found) {
//            result[resultSize++] = A[i];
//        }
//    }
//
//    sort(result, result + resultSize);
//
//    cout << "≈лементи A, €ких немаЇ в B: ";
//    for (int i = 0; i < resultSize; ++i) {
//        cout << result[i] << " ";
//    }
//    cout << endl;
//
//
//    delete[] A;
//    delete[] B;
//    delete[] result;
//
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    system("chcp 1251>null");
//
//    int M, N;
//    cout << "¬вед≥ть к≥льк≥сть елемент≥в дл€ масиву A: ";
//    cin >> M;
//    cout << "¬вед≥ть к≥льк≥сть елемент≥в дл€ масиву B: ";
//    cin >> N;
//
//    int* A = new int[M];
//    int* B = new int[N];
//
//    cout << "¬вед≥ть елементи дл€ масиву A: ";
//    for (int i = 0; i < M; i++) {
//        cin >> A[i];
//    }
//
//    cout << "¬вед≥ть елементи дл€ масиву B: ";
//    for (int i = 0; i < N; i++) {
//        cin >> B[i];
//    }
//
//    
//    int* result = new int[M + N];
//    int result_size = 0;
//
//   
//    for (int i = 0; i < M; i++) {
//        bool found_in_B = false;
//        for (int j = 0; j < N; j++) {
//            if (A[i] == B[j]) {
//                found_in_B = true;
//                break;
//            }
//        }
//        if (!found_in_B) {
//            result[result_size++] = A[i];
//        }
//    }
//
//    
//    for (int i = 0; i < N; i++) {
//        bool found_in_A = false;
//        for (int j = 0; j < M; j++) {
//            if (B[i] == A[j]) {
//                found_in_A = true;
//                break;
//            }
//        }
//        if (!found_in_A) {
//            result[result_size++] = B[i];
//        }
//    }
//
//    
//    sort(result, result + result_size);
//
//    
//    int unique_size = 0;
//    for (int i = 0; i < result_size; i++) {
//        if (i == 0 || result[i] != result[i - 1]) {
//            result[unique_size++] = result[i];
//        }
//    }
//
//    cout << "–езультат: ";
//    for (int i = 0; i < unique_size; i++) {
//        cout << result[i] << " ";
//    }
//    cout << endl;
//
//    delete[] A;
//    delete[] B;
//    delete[] result;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//bool isDuplicate(int* result, int size, int value) {
//    for (int i = 0; i < size; ++i) {
//        if (result[i] == value) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    system("chcp 1251>null");
//    int M, N;
//
//    cout << "¬вед≥ть розм≥р першого масиву (M): ";
//    cin >> M;
//    cout << "¬вед≥ть розм≥р другого масиву (N): ";
//    cin >> N;
//
//    int* A = new int[M];
//    int* B = new int[N];
//
//    cout << "¬вед≥ть елементи першого масиву (A): ";
//    for (int i = 0; i < M; ++i) {
//        cin >> A[i];
//    }
//
//    cout << "¬вед≥ть елементи другого масиву (B): ";
//    for (int i = 0; i < N; ++i) {
//        cin >> B[i];
//    }
//
//    int* result = new int[M + N];
//    int resultSize = 0;
//
//    
//    for (int i = 0; i < M; ++i) {
//        if (!isDuplicate(result, resultSize, A[i])) {
//            result[resultSize++] = A[i];
//        }
//    }
//
//    
//    for (int i = 0; i < N; ++i) {
//        if (!isDuplicate(result, resultSize, B[i])) {
//            result[resultSize++] = B[i];
//        }
//    }
//
//   
//    cout << "ћасив без дубл≥кат≥в: ";
//    for (int i = 0; i < resultSize; ++i) {
//        cout << result[i] << " ";
//    }
//    cout << "\n"; 
//
//    
//    delete[] A;
//    delete[] B;
//    delete[] result;
//
//    return 0;
//}
