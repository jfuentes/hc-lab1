/*********************************
* Lab 1 - Heterogeneous Computing 
* Fall 2021
**********************************/

#include <CL/sycl.hpp>

constexpr int N=50;
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
    buffer buff(A);
    buffer buff(B);
    buffer buff(C);

    // kernel submission on device hardware
    q.submit([&](handler& h){
        // Add your code here
    };

    for (int i=0; i<N; i++) 
		std::cout << v[i] << " ";
    std::cout << std::endl;

	return 0;
}