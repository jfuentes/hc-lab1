/*********************************
* Lab 1 - Heterogeneous Computing 
* Spring 2021
**********************************/

#include <CL/sycl.hpp>

constexpr int N = 20;
using namespace sycl;

int main(){
    // Queue for device execution
    queue q;
    std::cout << "Device : "
            << q.get_device().get_info<info::device::name>()
            << std::endl;

    // buffer declarations
    std::vector<int> A(N);
    std::vector<int> B(N);
    std::vector<int> C(N);	
    buffer buffA(A);
    buffer buffB(B);
    buffer buffC(C);;

    // kernel submission to hardware device
    q.submit([&](handler& h){
        // Add your code here
    };

    std::cout << "A: ";
    for (int i=0; i<N; i++) 
		    std::cout << A[i] << " ";
    std::cout << std::endl;

    std::cout << "B: ";
    for (int i=0; i<N; i++) 
		    std::cout << B[i] << " ";
    std::cout << std::endl;

    std::cout << "C: ";
    for (int i=0; i<N; i++) 
		    std::cout << C[i] << " ";
    std::cout << std::endl;

	return 0;
}