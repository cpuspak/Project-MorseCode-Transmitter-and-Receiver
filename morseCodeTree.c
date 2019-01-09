#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{
	char data;
	struct Node* dot;
	struct Node* dash;
}Node;

Node *head;
	Node* start;
	Node* A;
	Node* B;
	Node* C;	
	Node* D;
	Node* E;
	Node* F;
	Node* G;	
	Node* H;
	Node* I;
	Node* J;
	Node* K;
	Node* L;	
	Node* M;
	Node* N;
	Node* O;	
	Node* P;
	Node* Q;
	Node* R;
	Node* S;	
	Node* T;
	Node* U;
	Node* V;
	Node* W;
	Node* X;	
	Node* Y;
	Node* Z;
	Node* zero;
	Node* one;	
	Node* two;
	Node* three;
	Node* four;
	Node* five;	
	Node* six;
	Node* seven;
	Node* eight;
	Node* nine;
	Node* question;	
	Node* dot;
	Node* dash;


	char morseCodes[39][6];


	char getMessage(char s[],int l){
		head = start;
		int i = 0,flag = 0;
		char message;
		for(i = 0;i<l;i++){
			if(s[i] == '.'){
				if(head->dot == NULL){
					flag = 1;
					break;	
				}
				head = head->dot;
			}
				
			else{
				if(head->dash == NULL){
					flag = 1;
					break;	
				}
				head = head->dash;	
			}
						
		}
		if(flag == 1)
			message = '#';
		else
			message = head->data;
		return message;		
	}
	


	char *getMorse(char message){
		if(message == '?' || message == '.' || message == '-'){
			if(message == '?'){
				return morseCodes[36];	
			}
			else if(message == '.'){
				return morseCodes[37];		
			}
			else{
				return morseCodes[38];
			}
				
		}
		else if(message < 10){
			return morseCodes[message];
		}
		else{
			return morseCodes[message - 55];
		}		

		
	}

int main(){



//formation of the morse code binary tree
	start = (Node*)malloc(sizeof(Node));
	A = (Node*)malloc(sizeof(Node));
	B = (Node*)malloc(sizeof(Node));
	C = (Node*)malloc(sizeof(Node));	
	D = (Node*)malloc(sizeof(Node));
	E = (Node*)malloc(sizeof(Node));
	F = (Node*)malloc(sizeof(Node));
	G = (Node*)malloc(sizeof(Node));	
	H = (Node*)malloc(sizeof(Node));
	I = (Node*)malloc(sizeof(Node));
	J = (Node*)malloc(sizeof(Node));
	K = (Node*)malloc(sizeof(Node));
	L = (Node*)malloc(sizeof(Node));	
	M = (Node*)malloc(sizeof(Node));
	N = (Node*)malloc(sizeof(Node));
	O = (Node*)malloc(sizeof(Node));	
	P = (Node*)malloc(sizeof(Node));
	Q = (Node*)malloc(sizeof(Node));
	R = (Node*)malloc(sizeof(Node));
	S = (Node*)malloc(sizeof(Node));	
	T = (Node*)malloc(sizeof(Node));
	U = (Node*)malloc(sizeof(Node));
	V = (Node*)malloc(sizeof(Node));
	W = (Node*)malloc(sizeof(Node));
	X = (Node*)malloc(sizeof(Node));	
	Y = (Node*)malloc(sizeof(Node));
	Z = (Node*)malloc(sizeof(Node));
	zero = (Node*)malloc(sizeof(Node));
	one = (Node*)malloc(sizeof(Node));	
	two = (Node*)malloc(sizeof(Node));
	three = (Node*)malloc(sizeof(Node));
	four = (Node*)malloc(sizeof(Node));
	five = (Node*)malloc(sizeof(Node));	
	six = (Node*)malloc(sizeof(Node));
	seven = (Node*)malloc(sizeof(Node));
	eight = (Node*)malloc(sizeof(Node));
	nine = (Node*)malloc(sizeof(Node));
	question = (Node*)malloc(sizeof(Node));	
	dot = (Node*)malloc(sizeof(Node));
	dash = (Node*)malloc(sizeof(Node));
	

	start -> data = '#';
	A -> data = 'A';
	B -> data = 'B';
	C -> data = 'C';	
	D -> data = 'D';
	E -> data = 'E';
	F -> data = 'F';
	G -> data = 'G';
	H -> data = 'H';
	I -> data = 'I';	
	J -> data = 'J';
	K -> data = 'K';
	L -> data = 'L';
	M -> data = 'M';
	N -> data = 'N';
	O -> data = 'O';	
	P -> data = 'P';
	Q -> data = 'Q';
	R -> data = 'R';
	S -> data = 'S';
	T -> data = 'T';
	U -> data = 'U';	
	V -> data = 'V';
	W -> data = 'W';
	X -> data = 'X';
	Y -> data = 'Y';
	Z -> data = 'Z';
	zero -> data = '0';
	one -> data = '1';	
	two -> data = '2';
	three -> data = '3';
	four -> data = '4';
	five -> data = '5';
	six -> data = '6';
	seven -> data = '7';	
	eight -> data = '8';
	nine -> data = '9';
	question -> data = '?';
	dot -> data = '.';
	dash -> data = '-';

	start -> dash = T;
	start -> dot = E;

	T -> dash = M;
	T -> dot = N;
	
	E -> dash = A;
	E -> dot = I;
	
	M -> dash = O;
	M -> dot = G;
	
	N -> dash = K;
	N -> dot = D;

	A -> dash = W;
	A -> dot = R;
	
	I -> dash = U;
	I -> dot = S;
	
	O -> dash = question;
	O -> dot = dot;

	G -> dash = Q;
	G -> dot = Z;

	K -> dash = Y;
	K -> dot = C;
	
	D -> dash = X;
	D -> dot = B;
	
	W -> dash = J;
	W -> dot = P;

	R -> dash = NULL;
	R -> dot = L;

	U -> dash = dash;
	U -> dot = F;
	
	S -> dash = V;
	S -> dot = H;
	
	question -> dash = zero;
	question -> dot = nine;


	dot -> dash = NULL;
	dot -> dot = eight;
	
	Q -> dash = NULL;
	Q -> dot = NULL;
	
	Z -> dash = NULL;
	Z -> dot = seven;

	Y -> dash = NULL;
	Y -> dot = NULL;

	C -> dash = NULL;
	C -> dot = NULL;

	
	X -> dash = NULL;
	X -> dot = NULL;

	B -> dash = NULL;
	B -> dot = six;

	J -> dash = one;
	J -> dot = NULL;
	
	P -> dash = NULL;
	P -> dot = NULL;
	
	L -> dash = NULL;
	L -> dot = NULL;

	dash -> dash = two;
	dash -> dot = NULL;

	F -> dash = NULL;
	F -> dot = NULL;
	
	V -> dash = three;
	V -> dot = NULL;
	
	H -> dash = four;
	H -> dot = five;

	
	zero -> dash = NULL;
	zero -> dot = NULL;


	
	nine -> dash = NULL;
	nine -> dot = NULL;


	eight -> dash = NULL;
	eight -> dot = NULL;


	seven -> dash = NULL;
	seven -> dot = NULL;

	
	six -> dash = NULL;
	six -> dot = NULL;

	
	one -> dash = NULL;
	one -> dot = NULL;

	two -> dash = NULL;
	two -> dot = NULL;


	three -> dash = NULL;
	three -> dot = NULL;

	
	four -> dash = NULL;
	four -> dot = NULL;

	
	five -> dash = NULL;
	five -> dot = NULL;
	

	
	strcpy(morseCodes[0],"-----");
	strcpy(morseCodes[9],"----.");
	strcpy(morseCodes[8],"---..");
	strcpy(morseCodes[7],"--...");
	strcpy(morseCodes[6],"-....");
	strcpy(morseCodes[1],".----");
	strcpy(morseCodes[2],"..---");
	strcpy(morseCodes[3],"...--");
	strcpy(morseCodes[4],"....-");
	strcpy(morseCodes[5],".....");
	
	strcpy(morseCodes['A'-55],".-");
	strcpy(morseCodes['B'-55],"-...");
	strcpy(morseCodes['C'-55],"-.-.");
	strcpy(morseCodes['D'-55],"-..");
	strcpy(morseCodes['E'-55],".");
	strcpy(morseCodes['F'-55],"..-.");
	strcpy(morseCodes['G'-55],"--.");
	strcpy(morseCodes['H'-55],"....");
	strcpy(morseCodes['I'-55],"..");
	strcpy(morseCodes['J'-55],".---");
	strcpy(morseCodes['K'-55],"-.-");
	strcpy(morseCodes['L'-55],".-..");
	strcpy(morseCodes['M'-55],"--");
	strcpy(morseCodes['N'-55],"-.");
	strcpy(morseCodes['O'-55],"---");
	strcpy(morseCodes['P'-55],".--.");
	strcpy(morseCodes['Q'-55],"--.-");
	strcpy(morseCodes['R'-55],".-.");
	strcpy(morseCodes['S'-55],"...");
	strcpy(morseCodes['T'-55],"-");
	strcpy(morseCodes['U'-55],"..-");
	strcpy(morseCodes['V'-55],"...-");
	strcpy(morseCodes['W'-55],".--");
	strcpy(morseCodes['X'-55],"-..-");
	strcpy(morseCodes['Y'-55],"-.--");
	strcpy(morseCodes['Z'-55],"--..");
	
	strcpy(morseCodes[36],"----"); //question mark
	strcpy(morseCodes[37],"---."); //dot	
	strcpy(morseCodes[38],"..--"); //dash


/*
	char message = getMessage(s,strlen(s));
	if(message == '#')
		printf("No such morse code\n");
	else
		printf("%c\n",message);

	printf("Enter a character : ");
	scanf("%c",&message);
	char *morse = getMorse(message);
	
	puts(morse);
	
*/


//encoder
	printf("Enter a sentence to encode to morse code : ");
	char message[1000000];
	gets(message);


	int l = strlen(message);
	message[l] = '\0';


	int i = 0;
	for(i = 0;i<l;i++){

		if(message[i] != ' '){
			
			char *morse = getMorse(message[i]);
			puts(morse);		
		}
	}


//decoder..................multiple spaces for inter space in output
	
	printf("Enter morse codes seperated by spaces(multiple spaces for inter space in output) : ");
	char code[1000000];
	gets(code);
	l = strlen(code);
	code[l] = '\0';
	char string[6];
	int count = 0;
	for(i = 0;i<l;i++){
		if(i != 0 && code[i] == ' '){
			if(code[i-1] == ' '){	
				printf(" ");			
				continue;
			}
			else{
				string[count] = '\0';
				char s = getMessage(string,strlen(string));
				printf("%c",s);
				strcpy(string,"");
				count = 0;			
			}		
		}
		else{
			string[count] = code[i];
			count++;		
		}
		
		
	}
	printf("%c\n",getMessage(string,strlen(string)));
	return 0;	

}
