typedef struct{char *name; long sig; void (*fn)(void*); int size; int np; uchar map[16];} Runtab;
Runtab Loadermodtab[]={
	"compile",0x9af56bb1,Loader_compile,40,2,{0x0,0x80,},
	"dnew",0x62a7cf80,Loader_dnew,40,2,{0x0,0x40,},
	"ext",0xcd936c80,Loader_ext,48,2,{0x0,0x80,},
	"handlers",0xba293f83,Loader_handlers,40,2,{0x0,0x80,},
	"ifetch",0xfb64be19,Loader_ifetch,40,2,{0x0,0x80,},
	"imports",0x6412fb82,Loader_imports,40,2,{0x0,0x80,},
	"link",0xe2473595,Loader_link,40,2,{0x0,0x80,},
	"newmod",0x6de26f71,Loader_newmod,56,2,{0x0,0x98,},
	"sethandlers",0xb1265f9e,Loader_sethandlers,40,2,{0x0,0xc0,},
	"setimports",0xe122d798,Loader_setimports,40,2,{0x0,0xc0,},
	"tdesc",0xb933ef75,Loader_tdesc,40,2,{0x0,0x80,},
	"tnew",0xc1d58785,Loader_tnew,48,2,{0x0,0xa0,},
	0
};
#define Loadermodlen	12
