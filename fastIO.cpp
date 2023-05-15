namespace FAST_IO{
	#define i64 long long
	#define u64 unsigned long long
	#define db double
	#define _8 __int128_t
	const int LEN=1<<20;
	char BUF[LEN],PUF[LEN];
	int Pin=LEN,Pout;
	inline void flushin(){memcpy(BUF,BUF+Pin,LEN-Pin),fread(BUF+LEN-Pin,1,Pin,stdin),Pin=0;return;}
	inline void flushout(){fwrite(PUF,1,Pout,stdout),Pout=0;return;}
	inline char Getc(){return (Pin==LEN?(fread(BUF,1,LEN,stdin),Pin=0):0),BUF[Pin++];}
	inline char Get(){return BUF[Pin++];}
	inline void Putc(char x){if(Pout==LEN)flushout(),Pout=0;PUF[Pout++]=x;}
	inline void Put(char x){PUF[Pout++]=x;}
	template<typename tp=int>inline tp read(){(Pin+32>=LEN)?flushin():void();tp res=0;char f=1,ch=' ';for(;ch<'0'||ch>'9';ch=Get())if(ch=='-')f=-1;for(;ch>='0'&&ch<='9';ch=Get())res=(res<<3)+(res<<1)+ch-48;return res*f;}
	template<typename tp>inline void wt(tp a){if(a>9)wt(a/10);Put(a%10+'0');return;}
	template<typename tp>inline void write(tp a,char b='\n')
	{
		static int stk[20],top;
		(Pout+32>=LEN)?flushout():void();
		if(a<0)Put('-'),a=-a;
		else if(a==0)Put('0');
		for(top=0;a;a/=10)stk[++top]=a%10;
		for(;top;--top)Put(stk[top]^48);
		Put(b);
		return;
	}
	inline void wt_str(std::string s){for(char i:s)Putc(i);return;}
}
using namespace FAST_IO;
