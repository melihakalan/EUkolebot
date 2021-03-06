#ifndef MemoryH
#define MemoryH

#include <Classes.hpp>

const DWORD KO_CHAR	=	0xCF6810;//
const DWORD KO_DLGA =	0xCF68C8;//
const DWORD KO_SOCK = 	0xCF6894;//
const DWORD KO_SDFX = 	0xC707C8;//
const DWORD KO_RCVA	=	0xA609A0;//
const DWORD KO_RCVB	=	0x4DA060;//
const DWORD KO_PRTY = 	0xCF68B4;//
const DWORD KO_AREA = 	0xCF680C;//
const DWORD KO_FPOZ = 	0x7DD520;//
const DWORD KO_SETM = 	0x4B66A0;//
const DWORD KO_FNCZ = 	0x4BCC60;//
const DWORD KO_CRYP = 	0x47DA60;//
const DWORD KO_INDX =	0x470960;//
const DWORD KO_WNDA = 	0xA78788;//
const DWORD KO_FPBS = 	0x492290;//
const DWORD KO_FMBS = 	0x491330;//
const DWORD KO_RCFX = 	0xCF694C;//
const DWORD KO_NXTP = 	0x48BA80;//
const DWORD KO_NXTM = 	0x48BAF0;//
const DWORD KO_MSBX = 	0x8B8650;//
const DWORD KO_MSOP = 	0x5E5FF0;//
const DWORD KO_DISC = 	0x47DDF0;//
const DWORD KO_CONN = 	0x47DE90;//
const DWORD KO_SCK2 = 	0xB9E434;//
const DWORD KO_ITPA =	0xC27AC4;
const DWORD KO_ITPB =	0xC27AC8;
const DWORD KO_ITCA =	0x7E2CF0;
const DWORD KO_ITCB =	0x479230;
const DWORD KO_NPCB =	0x5DB880;
const DWORD KO_ISEN =	0x49AC90;
const DWORD KO_LOCA =   0xC27C48;
const DWORD KO_IPOS =   0x7FB870;
const DWORD KO_PSFN =   0xC27B80;
const DWORD KO_CSFN =   0x795310;
const DWORD KO_INNC =   0x512830;
const DWORD KO_CHKS =   0x575A10;
const DWORD KO_SITD =	0x827C20;
const DWORD KO_PKTC =	0xC27FD0;
const DWORD KO_CRP1 =	0x9575F0;
const DWORD KO_CRP2 =	0x94F4CA;
const DWORD KO_CRP3 =	0x95D3C0;
const DWORD KO_CRP4 =	0x95A8C0;
const DWORD KO_QUIT =	0x9BC3FC;
const DWORD KO_ACID =	0xC27ECC;
const DWORD KO_INTR =	0xC707CC;//
const DWORD KO_CAST =	0x784FF0;
const DWORD KO_PICK = 	0x4A8D10;
const DWORD KO_HWND = 	0xB9E434;//

const DWORD KO_API1 =	0x9BC28C;
const DWORD KO_API2 =	0x9BC2D0;
const DWORD KO_API3 =	0x9BC2D8;
const DWORD KO_API4 = 	0x9BC4B0;
const DWORD KO_API5 =	0x9BC3D4;
const DWORD KO_API6 =	0x9BC2E0;
const DWORD KO_API7 =	0x9BC1A0;

const DWORD KO_TPT1 =	0x950000;
const DWORD KO_TPT2 =	0x952000;

const DWORD KO_LGN1	=	0xC25C04;
const DWORD KO_LGN2 =	0xC27F20;
const DWORD KO_LGN3 =	0xC27F34;
const DWORD KO_LGN4 =	0x86B660;
const DWORD KO_LGN5 =	0x86BEB0;
const DWORD KO_LGN6 =	0x88BA30;
const DWORD KO_LGN7 =	0x88BB20;
const DWORD KO_LGN8 =	0x88C8C0;
const DWORD KO_LGN9 =	0x88C5D0;
const DWORD KO_LGN10 =	0x88BBA0;
const DWORD KO_LGN11 =	0xC27FA0;
const DWORD KO_LGN12 =	0x86FBB0;
const DWORD KO_LGN13 = 	0xC27F40;
const DWORD KO_LGN14 = 	0x876C90;
const DWORD KO_LGN15 = 	0x876D20;
const DWORD KO_LGN16 = 	0x8789F0;
const DWORD KO_LGN17 = 	0xB9D21B;//


const DWORD KO_NICK = 	0x5CC;
const DWORD KO_LEVL = 	0x5EC;
const DWORD KO_CLSS = 	0x5E8;
const DWORD KO_MYID = 	0x5C4;
const DWORD KO_TGID = 	0x590;
const DWORD KO_VELO = 	0x690;
const DWORD KO_AUTH =	0x5F8;
const DWORD KO_CRHP = 	0x5F4;
const DWORD KO_MXHP = 	0x5F0;
const DWORD KO_CRMP =	0x9C8;
const DWORD KO_MXMP = 	0x9C4;
const DWORD KO_CRXP = 	0x9E0;
const DWORD KO_MXXP = 	0x9D8;
const DWORD KO_POSX = 	0xC4;
const DWORD KO_POSY = 	0xCC;
const DWORD KO_POSZ = 	0xC8;
const DWORD KO_COIN = 	0x820;
const DWORD KO_VISB = 	0x524;
const DWORD KO_NATN = 	0x5E0;
const DWORD KO_PTRX = 	0xD74;
const DWORD KO_PTRY = 	0xD7C;
const DWORD KO_PTRZ = 	0xD78;
const DWORD KO_MOV1 = 	0xD68;
const DWORD KO_MOV2 = 	0x3A4;
const DWORD KO_SIZE = 	0x400;
const DWORD KO_BSTN =	0xD28;
const DWORD KO_FSTN =	0xD2C;
const DWORD KO_ZONE =	0xA64;
const DWORD KO_CHST =	0x420;

const DWORD KO_PT_ID	=	0x8;
const DWORD KO_PT_HP  	=	0x14;
const DWORD KO_PT_MAXHP	=	0x18;
const DWORD KO_PT_MP  	=	0x1C;
const DWORD KO_PT_MAXMP	=	0x20;
const DWORD KO_PT_LVL 	=	0xC;
const DWORD KO_PT_CLASS	=	0x10;
const DWORD KO_PT_DISEASE	=	0x24;
const DWORD KO_PT_CURSE	=	0x25;
const DWORD KO_PT_NICK	=	0x30;

const DWORD KO_MINING	=	0x7CD;

//CGameProcMain offsets:
const DWORD OFF_MSG			=	0x1B0;
const DWORD OFF_STATEBAR	=	0x1B8;
const DWORD OFF_INVENTORY	=	0x1A0;
const DWORD OFF_WAREHOUSE	=	0x1EC;
const DWORD OFF_PARTY		=	0x1CC;
const DWORD OFF_SKILLTREE	=	0x1D0;


#endif

