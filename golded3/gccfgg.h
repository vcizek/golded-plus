
//  ------------------------------------------------------------------
//  GoldED+
//  Copyright (C) 1990-1999 Odinn Sorensen
//  Copyright (C) 1999-2000 Alexander S. Aganichev
//  ------------------------------------------------------------------
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License as
//  published by the Free Software Foundation; either version 2 of the
//  License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston,
//  MA 02111-1307 USA
//  ------------------------------------------------------------------
//  $Id$
//  ------------------------------------------------------------------
//  CRC16 values for all standard configuration keywords.
//  ------------------------------------------------------------------


//  ------------------------------------------------------------------

const word CRC_ADDRESS          = 0xFDD6;
const word CRC_ADDRESSBOOKADD   = 0xFF55;
const word CRC_ADDRESSLOOKUPFIRST=0x2137;
const word CRC_ADDRESSMACRO     = 0xDA5F;
const word CRC_ADEPTXBBSPATH    = 0x25D6;
const word CRC_ADEPTXBBSUSERNO  = 0x0E98;
const word CRC_AKA              = 0x13A4;
const word CRC_AKAMATCH         = 0xF237;
const word CRC_AKAMATCHECHO     = 0xF0C1;
const word CRC_AKAMATCHING      = 0x869A;
const word CRC_AKAMATCHLOCAL    = 0x4AC4;
const word CRC_AKAMATCHNET      = 0xFD6E;
const word CRC_AREA             = 0x010B;
const word CRC_AREAAUTOID       = 0x365D;
const word CRC_AREAAUTONEXT     = 0xF589;
const word CRC_AREACATCHUPREAD  = 0xDAFF;
const word CRC_AREACFMREPLYTO   = 0x0755;
const word CRC_AREACOPYADDID    = 0xAE1E;
const word CRC_AREACOPYDIRECT   = 0xDB3D;
const word CRC_AREACOPYTO       = 0xFCAF;
const word CRC_AREADEF          = 0xA6CC;
const word CRC_AREADESC         = 0x0C6F;
const word CRC_AREAEXCL         = 0xECCD;
const word CRC_AREAFILE         = 0xB487;
const word CRC_AREAFILEGROUPS   = 0xF0E7;
const word CRC_AREAFORWARDDIRECT= 0x1E6C;
const word CRC_AREAFREQDIRECT   = 0x155A;
const word CRC_AREAFREQTO       = 0x3C56;
const word CRC_AREAINCL         = 0xDB57;
const word CRC_AREAISEMAIL      = 0xB054;
const word CRC_AREAISNEWS       = 0x52DB;
const word CRC_AREAKEEPLAST     = 0x5876;
const word CRC_AREALISTECHOMAX  = 0x944D;
const word CRC_AREALISTFORMAT   = 0x9080;
const word CRC_AREALISTGROUPID  = 0x1F75;
const word CRC_AREALISTNOS      = 0x5FD7;
const word CRC_AREALISTPAGEBAR  = 0x6C37;
const word CRC_AREALISTSCAN     = 0xDAF7;
const word CRC_AREALISTSORT     = 0x0861;
const word CRC_AREALISTTYPE     = 0xE110;
const word CRC_AREAPATH         = 0x8457;
const word CRC_AREAPMSCAN       = 0xE19D;
const word CRC_AREAPMSCANEXCL   = 0xA2BE;
const word CRC_AREAPMSCANINCL   = 0x9524;
const word CRC_AREAREADONLY     = 0xE4F3;
const word CRC_AREARENAME       = 0xFC32;
const word CRC_AREAREPLYDIRECT  = 0x7570;
const word CRC_AREAREPLYTO      = 0x7157;
const word CRC_AREASCAN         = 0xE440;
const word CRC_AREASCANEXCL     = 0x393E;
const word CRC_AREASCANINCL     = 0x0EA4;
const word CRC_AREASCANSORT     = 0xE325;
const word CRC_AREASEP          = 0xC40C;
const word CRC_AREASTART        = 0x7B1A;
const word CRC_AREATYPEORDER    = 0xFD13;
const word CRC_AREAYOUWROTETO   = 0xC87F;
const word CRC_ASKDELORIG       = 0x26DD;
const word CRC_ASSIGNTO         = 0xD095;
const word CRC_ATTACHPATH       = 0x1400;
const word CRC_ATTRIBSATTACH    = 0xAC4F;
const word CRC_ATTRIBSCC        = 0xD698;
const word CRC_ATTRIBSCFM       = 0x36F6;
const word CRC_ATTRIBSECHO      = 0x5FD9;
const word CRC_ATTRIBSEMAIL     = 0xC670;
const word CRC_ATTRIBSFRQ       = 0x724F;
const word CRC_ATTRIBSLOCAL     = 0x16C1;
const word CRC_ATTRIBSNET       = 0xE442;
const word CRC_ATTRIBSNEWS      = 0xFCF9;
const word CRC_ATTRIBUTES       = 0xFD98;
const word CRC_BEEPCOMMENT      = 0xC49E;
const word CRC_BEEPFACTOR       = 0x8F3A;
const word CRC_BEEPLOCALMSG     = 0x984C;
const word CRC_BEEPNOISES       = 0x84D5;
const word CRC_BEEPYOURMAIL     = 0x0F72;
const word CRC_CARBONCOPYLIST   = 0x8290;
const word CRC_COLOR            = 0x9F15;
const word CRC_COLORSET         = 0x874C;
const word CRC_CONFIRMFILE      = 0x1963;
const word CRC_CONFIRMRESPONSE  = 0x3D82;
const word CRC_COOKIEPATH       = 0x5280;
const word CRC_CROSSPOST        = 0x8792;
const word CRC_CROSSPOSTLIST    = 0x5854;
const word CRC_CTRLINFO         = 0x904A;
const word CRC_CTRLINFOECHO     = 0xDE22;
const word CRC_CTRLINFOEMAIL    = 0xBCD9;
const word CRC_CTRLINFOLOCAL    = 0x6C68;
const word CRC_CTRLINFONET      = 0x7660;
const word CRC_CTRLINFONEWS     = 0x7D02;
const word CRC_CTRLSEARCH       = 0x471F;
const word CRC_DISPAREANO       = 0x68CE;
const word CRC_DISPATTACHSIZE   = 0x7BB4;
const word CRC_DISPAUTONEXT     = 0x52D9;
const word CRC_DISPHDRDATESET   = 0x65A5;
const word CRC_DISPHDRNAMESET   = 0xFEF9;
const word CRC_DISPHDRNODESET   = 0xC232;
const word CRC_DISPLISTCURSOR   = 0x8B82;
const word CRC_DISPLISTWRAP     = 0xB36D;
const word CRC_DISPLOCALHIGH    = 0x1D8B;
const word CRC_DISPMARGIN       = 0xC0EC;
const word CRC_DISPMSGSIZE      = 0xB0E2;
const word CRC_DISPPAGEBAR      = 0x60A4;
const word CRC_DISPREALMSGNO    = 0xE30F;
const word CRC_DISPREPLIESMODE  = 0x0099;
const word CRC_DISPSOFTCR       = 0x85E9;
const word CRC_DISPSTATUSLINE   = 0x3FCF;
const word CRC_DISPTABSIZE      = 0x01FB;
const word CRC_DOSPROMPT        = 0xD983;
const word CRC_EDITAUTOATTACH   = 0x62C8;
const word CRC_EDITAUTOSAVE     = 0x351B;
const word CRC_EDITCHANGEDATE   = 0x847F;
const word CRC_EDITCHARPARA     = 0x6CFC;
const word CRC_EDITCHARSPACE    = 0x182F;
const word CRC_EDITCOMMENT      = 0x662C;
const word CRC_EDITCOMPLETION   = 0xDA45;
const word CRC_EDITCRLFTERM     = 0x0461;
const word CRC_EDITFIELDCLEAR   = 0xC3C4;
const word CRC_EDITHARDLINE     = 0xAD88;
const word CRC_EDITHARDLINES    = 0xEC14;
const word CRC_EDITHARDTERM     = 0xFAD6;
const word CRC_EDITHDRNAMESET   = 0x4AB4;
const word CRC_EDITHDRNODESET   = 0x767F;
const word CRC_EDITHEADERATTRS  = 0x74FD;
const word CRC_EDITHEADERFIRST  = 0xE583;
const word CRC_EDITINTERNAL     = 0xC2EA;
const word CRC_EDITMENU         = 0x833E;
const word CRC_EDITMIXCASE      = 0x5814;
const word CRC_EDITMSGSIZE      = 0xCF31;
const word CRC_EDITOR           = 0xF1C3;
const word CRC_EDITORFILE       = 0xA49C;
const word CRC_EDITQUOTEMARGIN  = 0xACC7;
const word CRC_EDITREPLYRE      = 0x5D23;
const word CRC_EDITSAVEMENU     = 0x7BC2;
const word CRC_EDITSAVEUTIL     = 0xF411;
const word CRC_EDITSOFTCRXLAT   = 0xA49A;
const word CRC_EDITSPELLCHECK   = 0xE167;
const word CRC_EDITUNDELETE     = 0x4C34;
const word CRC_EMPTYTEARLINE    = 0x8D0A;
const word CRC_ENCODEEMAILHEADERS=0xA843;
const word CRC_ENDGROUP         = 0x4F27;
const word CRC_EVENT            = 0x0471;
const word CRC_EXCLUDENODES     = 0x0BFF;
const word CRC_EXTERNOPTIONS    = 0xECF5;
const word CRC_EXTERNUTIL       = 0xBFD6;
const word CRC_EZYCOMMSGBASE    = 0x1A58;
const word CRC_EZYCOMUSERBASE   = 0x23D3;
const word CRC_EZYCOMUSERNO     = 0x53F6;
const word CRC_FIDOHWMARKS      = 0x7E07;
const word CRC_FIDOLASTREAD     = 0xB5C3;
const word CRC_FIDOLASTREADNO   = 0x4698;
const word CRC_FIDOMSGTYPE      = 0x069B;
const word CRC_FIDONULLFIX      = 0x4F38;
const word CRC_FIDOUSERLIST     = 0xDA02;
const word CRC_FIDOUSERNO       = 0x903A;
const word CRC_FILEALIAS        = 0xEC23;
const word CRC_FILELISTPAGEBAR  = 0x58AA;
const word CRC_FORCETEMPLATE    = 0xC8FB;
const word CRC_FORMFEEDSEPARATOR= 0xDBD6;
const word CRC_FREEAREA         = 0x93CF;
const word CRC_FRQEXT           = 0x0410;
const word CRC_FRQNODEMAP       = 0x4684;
const word CRC_FRQOPTIONS       = 0x0AD3;
const word CRC_FRQWAZOO         = 0xE49C;
const word CRC_GEDHANDSHAKE     = 0x344F;
const word CRC_GERMANKEYBOARD   = 0x0604;
const word CRC_GOLDBASEPATH     = 0x12E1;
const word CRC_GOLDBASESYSPATH  = 0x7DD1;
const word CRC_GOLDBASEUSERNO   = 0xD42E;
const word CRC_GOLDHELP         = 0xE657;
const word CRC_GOLDLANG         = 0x6800;
const word CRC_GOLDPATH         = 0x3411;
const word CRC_GOLDXLAT         = 0x7909;
const word CRC_GROUP            = 0x1C9B;
const word CRC_HAPPYBIRTHDAY    = 0x7279;
const word CRC_HIGHLIGHTUNREAD  = 0x45DA;
const word CRC_HUDSONPATH       = 0x52A7;
const word CRC_HUDSONSIZEWARN   = 0x111A;
const word CRC_HUDSONSYSPATH    = 0xC716;
const word CRC_HUDSONUSERNO     = 0xF1E0;
const word CRC_IGNORE           = 0xC07B;
const word CRC_IGNORECHARSET    = 0x894C;
const word CRC_IMPORTBEGIN      = 0x66D7;
const word CRC_IMPORTEND        = 0xD9C3;
const word CRC_INBOUNDPATH      = 0xDE04;
const word CRC_INCLUDE          = 0x379B;
const word CRC_INCLUDENODES     = 0xE5F7;
const word CRC_INPUTFILE        = 0x7013;
const word CRC_INTENSECOLORS    = 0x5F70;
const word CRC_INTERNETADDRESS  = 0xA4D3;
const word CRC_INTERNETDOMAIN   = 0x50d7;
const word CRC_INTERNETGATE     = 0xF6C0;
const word CRC_INTERNETGATEEXP  = 0x0797;
const word CRC_INTERNETLOOKUP   = 0x0E22;
const word CRC_INTERNETMSGID    = 0xC31F;
const word CRC_INTERNETREPLY    = 0x6253;
const word CRC_INTERNETRFCBODY  = 0x9390;
const word CRC_INTERNETSERVER   = 0xA01B;
const word CRC_INVALIDATE       = 0x69CB;
const word CRC_JAMHARDDELETE    = 0xE2D5;
const word CRC_JAMPATH          = 0x1200;
const word CRC_KEYBCLEAR        = 0xD407;
const word CRC_KEYBDEFAULTS     = 0x9FAE;
const word CRC_KEYBEXT          = 0xC48A;
const word CRC_KEYBMODE         = 0xE8F2;
const word CRC_KEYBSTACK        = 0x5F23;
const word CRC_KLUDGE           = 0xA600;
const word CRC_KLUDGECHRS       = 0x0EEF;
const word CRC_LOADLANGUAGE     = 0x9F1B;
const word CRC_LOGFILE          = 0x8ACE;
const word CRC_LOGFORMAT        = 0x9E51;
const word CRC_LOGLEVEL         = 0xCF59;
const word CRC_LOOKUPECHO       = 0xB787;
const word CRC_LOOKUPLOCAL      = 0x34E7;
const word CRC_LOOKUPNET        = 0x7359;
const word CRC_LOOKUPUSERBASE   = 0x5852;
const word CRC_MAILINGLIST      = 0x08CD;
const word CRC_MAILTOSS         = 0x424E;
const word CRC_MAPPATH          = 0x74E6;
const word CRC_MEMBER           = 0xF703;
const word CRC_MENUDROPMSG      = 0x9645;
const word CRC_MENUMARKED       = 0x7198;
const word CRC_MOUSE            = 0x1B1B;
const word CRC_MSGLISTDATE      = 0xBFF5;
const word CRC_MSGLISTFAST      = 0xDE86;
const word CRC_MSGLISTFIRST     = 0x326F;
const word CRC_MSGLISTHEADER    = 0x8B8E;
const word CRC_MSGLISTPAGEBAR   = 0x8041;
const word CRC_MSGLISTVIEWSUBJ  = 0xED92;
const word CRC_MSGLISTWIDESUBJ  = 0xF385;
const word CRC_NAMESFILE        = 0x1743;
const word CRC_NICKNAME         = 0x70D8;
const word CRC_NETNAME          = 0xB574;
const word CRC_NODELIST         = 0x0E0A;
const word CRC_NODELISTWARN     = 0xF818;
const word CRC_NODEPATH         = 0xCE00;
const word CRC_NODEPATHFD       = 0x731F;
const word CRC_NODEPATHIM       = 0x7C16;
const word CRC_NODEPATHV7       = 0x636C;
const word CRC_NODEV7FLAGS      = 0x6BEE;
const word CRC_NODEV7MODEM      = 0x9CF7;
const word CRC_ORGANIZATION     = 0x8ADC;
const word CRC_ORIGIN           = 0x4CE5;
const word CRC_OUTBOUNDPATH     = 0xB089;
const word CRC_OUTPUTFILE       = 0xA697;
const word CRC_PATHREPORTFILE   = 0x8700;
const word CRC_PCBOARDPATH      = 0xC08B;
const word CRC_PCBOARDUSERNO    = 0x6A87;
const word CRC_PERSONALMAIL     = 0xD340;
const word CRC_PLAY             = 0xC6AE;
const word CRC_PRINTDEVICE      = 0xA4C3;
const word CRC_PRINTFORMFEED    = 0x59FB;
const word CRC_PRINTINIT        = 0xB195;
const word CRC_PRINTLENGTH      = 0x5D19;
const word CRC_PRINTMARGIN      = 0xAC75;
const word CRC_PRINTRESET       = 0xEFBD;
const word CRC_QUOTEBLANK       = 0xD3BB;
const word CRC_QUOTEBUFFILE     = 0xDE2A;
const word CRC_QUOTEBUFMODE     = 0x6A16;
const word CRC_QUOTECHARS       = 0x3457;
const word CRC_QUOTECTRL        = 0x4CC7;
const word CRC_QUOTEMARGIN      = 0x13E6;
const word CRC_QUOTESPACING     = 0xB403;
const word CRC_QUOTESTRING      = 0xE44F;
const word CRC_QUOTESTOPS       = 0xD2E4;
const word CRC_QUOTEWRAPHARD    = 0x6BD4;
const word CRC_QWKBADMSGS       = 0x0C2D;
const word CRC_QWKCONFMAP       = 0xEAE1;
const word CRC_QWKEXPORTPATH    = 0xB3AB;
const word CRC_QWKIMPORTPATH    = 0xECC0;
const word CRC_QWKOPTIONS       = 0x155E;
const word CRC_QWKREPLYLINKER   = 0x2A06;
const word CRC_QWKTOSSLOG       = 0x6AED;
const word CRC_RA2USERSBBS      = 0x1916;
const word CRC_RCVDISABLESCFM   = 0xD3B2;
const word CRC_REGISTERKEY      = 0xF428;
const word CRC_REGISTERNAME     = 0x2CAF;
const word CRC_REPLYLINK        = 0x88A1;
const word CRC_REPLYLINKLIST    = 0x104F;
const word CRC_ROBOTNAME        = 0x7393;
const word CRC_SCREENBLANKER    = 0x5CF7;
const word CRC_SCREENMAXCOL     = 0xFFFC;
const word CRC_SCREENMAXROW     = 0xFDF7;
const word CRC_SCREENPALETTE    = 0x49CA;
const word CRC_SCREENSHADOWS    = 0x8543;
const word CRC_SCREENSIZE       = 0xC3A5;
const word CRC_SCREENUSEANSI    = 0x7A70;
const word CRC_SCREENUSEBIOS    = 0x43DE;
const word CRC_SEARCHFOR        = 0x9FA6;
const word CRC_SEMAPHORE        = 0x02FB;
const word CRC_SERIALNO         = 0x6EDE;
const word CRC_SHAREMODE        = 0x068E;
const word CRC_SHOWDELETED      = 0xA9CE;
const word CRC_SOUNDDEVICE      = 0x831D;
const word CRC_SOUNDPATH        = 0xA4DA;
const word CRC_SOUPBADMSGS      = 0x372E;
const word CRC_SOUPEMAIL        = 0x423C;
const word CRC_SOUPEXPORTMARGIN = 0x0434;
const word CRC_SOUPEXPORTPATH   = 0xD3AC;
const word CRC_SOUPIMPORTPATH   = 0x8CC7;
const word CRC_SOUPNEWSRCFILE   = 0x6961;
const word CRC_SOUPREPLYLINKER  = 0x41A0;
const word CRC_SOUPREPLYTO      = 0xE741;
const word CRC_SOUPTOSSLOG      = 0x51EE;
const word CRC_SQUISHDIRECT     = 0x7C35;
const word CRC_SQUISHSCAN       = 0xE388;
const word CRC_SQUISHUSERNO     = 0x60AD;
const word CRC_SQUISHUSERPATH   = 0xFA97;
const word CRC_STATUSLINECLOCK  = 0x9C8A;
const word CRC_STATUSLINEHELP   = 0xA150;
const word CRC_STYLECODES       = 0x4CB0;
const word CRC_STYLECODEPUNCT   = 0x9D15;
const word CRC_STYLECODESTOPS   = 0xF452;
const word CRC_TAGLINE          = 0xC328;
const word CRC_TAGLINECHAR      = 0xD71E;
const word CRC_TAGLINEINTERNAL  = 0x0B41;
const word CRC_TAGLINESUPPORT   = 0x1F4D;
const word CRC_TASKTITLE        = 0xECEC;
const word CRC_TEARLINE         = 0xB385;
const word CRC_TEMPLATE         = 0x09DF;
const word CRC_TEMPLATEMATCH    = 0xECA9;
const word CRC_TEMPLATEPATH     = 0xB8C0;
const word CRC_TEMPPATH         = 0x4FCC;
const word CRC_TIMEOUT          = 0x4065;
const word CRC_TIMEOUTSAVEMSG   = 0xF644;
const word CRC_TIMESLICE        = 0x3EFF;
const word CRC_TIMESREAD        = 0xDD0E;
const word CRC_TITLESTATUS      = 0x5ABA;
const word CRC_TWITMODE         = 0x9DC8;
const word CRC_TWITNAME         = 0x2055;
const word CRC_TWITSUBJ         = 0x08C0;
const word CRC_TWITTO           = 0x9DFE;
const word CRC_USECHARSET       = 0xE1B9;
const word CRC_USEFLAGS         = 0xE2B6;
const word CRC_USEFWD           = 0x439F;
const word CRC_USEINTL          = 0x64CD;
const word CRC_USEMSGID         = 0x6FDB;
const word CRC_USEPID           = 0x2F68;
const word CRC_USERLIST         = 0xE81A;
const word CRC_USERLISTFILE     = 0xB749;
const word CRC_USERNAME         = 0x1161;
const word CRC_USETZUTC         = 0x27C5;
const word CRC_UUDECODEPATH     = 0x82A2;
const word CRC_VIEWHIDDEN       = 0x021D;
const word CRC_VIEWKLUDGE       = 0x4078;
const word CRC_VIEWQUOTE        = 0x0AB3;
const word CRC_WHOTO            = 0xB25F;
const word CRC_WILDCATUSERNO    = 0xC2FE;
const word CRC_WRITETEMPLATE    = 0xF4CB;
const word CRC_XLATCHARSET      = 0xA860;
const word CRC_XLATESCSET       = 0x4BA7;
const word CRC_XLATEXPORT       = 0x29CB;
const word CRC_XLATIMPORT       = 0xCE6A;
const word CRC_XLATLOCALSET     = 0x7180;
const word CRC_XLATPATH         = 0x7FA1;
const word CRC_ZONEGATING       = 0x956C;

const word CRC_IF               = 0x4946;
const word CRC_ELIF             = 0x3237;
const word CRC_ELSE             = 0x2834;
const word CRC_ELSEIF           = 0xB0DE;
const word CRC_ENDIF            = 0x9998;
const word CRC_REM              = 0x3FFA;


//  ------------------------------------------------------------------

const word CRC_LAST_CRC        = 0xFFFF;


//  ------------------------------------------------------------------

