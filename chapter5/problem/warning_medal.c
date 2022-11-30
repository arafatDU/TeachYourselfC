#include<stdio.h>
#include<math.h>

int main(){
	int num;
	printf("How many numbers?");
	scanf("%d",&num);
	int bsse14[num][3];
	float mean=0,variance=0,stddev,lowrange,highrange;

	char bssename[num][40];
	//getchar();
	for(int i=0; i<num; i++){
		//printf("Enter name of roll no %d: ",i+1);
		gets(bssename[i]);
		printf("Enter name of roll no %d: ",i+1);
	}
	for(int i=0; i<num; i++){
		printf("%s\n",bssename[i]);
	}

	int mid1[num], mid2[num], final[num], CSEall[num];
	for(int i=0; i<num; i++){
		printf("Enter mid1 mark of roll %d: ", i+1);
		scanf("%d",&mid1[i]);

		printf("Enter mid2 mark of roll %d: ", i+1);
		scanf("%d",&mid1[i]);

		printf("Enter final mark of roll %d: ", i+1);
		scanf("%d",&mid1[i]);
	}

	for(int i=0; i<num; i++){
		CSEall[i] = mid1[i] + mid2[i] + final[i];
		mean += CSEall[i];
	}
	mean /= 3 ;
	printf("mean: %f\n\n",mean);
	for(int i=0; i<num; i++){
		variance += (CSEall[i] - mean)*(CSEall[i] - mean);
	}
	variance /= (num-1);
	printf("variance: %f\n\n", variance);
	stddev = sqrt(variance);
	printf("Standard deviation: %f\n\n", stddev);

	return 0;
}


