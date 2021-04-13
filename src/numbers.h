int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;
int DP = 9;
int D1 = 10;
int D2 = 11;
int D3 = 12;
int D4 = 13;

void Write(int pin){
  digitalWrite(pin,HIGH);
}

void unwrite(int pin){
  digitalWrite(pin, LOW);
}

void one(){
  Write(B);
  Write(C);
  unwrite(A);
  unwrite(D);
  unwrite(E);
  unwrite(F);
  unwrite(G);
  unwrite(DP);
}

void two(){
  Write(A);
  Write(B);
  Write(D);
  Write(E);
  Write(G);
  unwrite(C);
  unwrite(F);
  unwrite(DP);
}

void three(){
  Write(A);
  Write(B);
  Write(D);
  Write(C);
  Write(G);
  unwrite(E);
  unwrite(F);
  unwrite(DP);
}

void four(){
  Write(B);
  Write(C);
  Write(F);
  Write(G);
  unwrite(A);
  unwrite(D);
  unwrite(E);
  unwrite(DP);
}

void five(){
  Write(A);
  Write(C);
  Write(D);
  Write(F);
  Write(G);
  unwrite(B);
  unwrite(E);
  unwrite(DP);
}

void six(){
  Write(A);
  Write(C);
  Write(D);
  Write(E);
  Write(F);
  Write(G);
  unwrite(B);
  unwrite(DP);
}

void seven(){
  Write(A);
  Write(B);
  Write(C);
  unwrite(D);
  unwrite(E);
  unwrite(F);
  unwrite(G);
  unwrite(DP);
}

void eight(){
  Write(A);
  Write(B);
  Write(C);
  Write(D);
  Write(E);
  Write(F);
  Write(G);
  unwrite(DP);
}

void nine(){
  Write(A);
  Write(B);
  Write(C);
  Write(D);
  Write(F);
  Write(G);
  unwrite(E);
  unwrite(DP);
}

void zero(){
  Write(A);
  Write(B);
  Write(C);
  Write(D);
  Write(E);
  Write(F);
  unwrite(G);
  unwrite(DP);
}

void off(){
  unwrite(A);
  unwrite(B);
  unwrite(C);
  unwrite(D);
  unwrite(E);
  unwrite(F);
  unwrite(G);
  unwrite(DP);
}
