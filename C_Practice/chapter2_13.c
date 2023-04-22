#include "chapter2_13.h"
/* 사용자 헤더 파일 chapter2_13.h에 stdio.h를 포함시켰으므로 다시 포함해 줄 필요 없음 */

void main() {
	/* int add_result, sub_result; // 실제로 사용하지 않는 변수라 각주처리함. */
	printf("10에서 5를 더하면 %d 이다. \n", ADD(10, 5));
	printf("10에서 5를 빼면 %d 이다. \n", SUB(10, 5));
}
