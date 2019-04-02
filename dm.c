int main(int arc, char **argv){
	int num = atoi(argv[1]);
	int i = 0;
	int j = 0;
	int k = 0;
	
	for(i = 0; i< num; i++){
		for(j=0; j<num; j++){
			for(k=0; k<num; k++){
				num = i + j;
			}
		}
	}
}