/* Keys.h          */
/* All keybindings */
/* commands */

/*Resources                                                                               */
/*SHCMD("$BROWSER") },                                                                    */
/*notify-send 'Hello world!' 'This is an example notification.' --icon=dialog-information */

static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = { "dmenu_run"};
static const char *termcmd[]  = { "st", NULL };

#include "shiftview.c"

static Key keys[] = {
        /* modifier                     key        function        argument */
        { MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
        { MODKEY|ShiftMask,             XK_Return, spawn,          {.v = termcmd } },
        { MODKEY,                       XK_b,      togglebar,      {0} },
        { MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
        { MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
        { MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
        { MODKEY,                       XK_d,      incnmaster,     {.i = -1 } },
        { MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
        { MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
        { MODKEY,                       XK_Return, zoom,           {0} },
        { MODKEY|Mod4Mask,              XK_u,      incrgaps,       {.i = +1 } },
        { MODKEY|Mod4Mask|ShiftMask,    XK_u,      incrgaps,       {.i = -1 } },
        { MODKEY|Mod4Mask,              XK_i,      incrigaps,      {.i = +1 } },
        { MODKEY|Mod4Mask|ShiftMask,    XK_i,      incrigaps,      {.i = -1 } },
        { MODKEY|Mod4Mask,              XK_o,      incrogaps,      {.i = +1 } },
        { MODKEY|Mod4Mask|ShiftMask,    XK_o,      incrogaps,      {.i = -1 } },
        { MODKEY|Mod4Mask,              XK_6,      incrihgaps,     {.i = +1 } },
        { MODKEY|Mod4Mask|ShiftMask,    XK_6,      incrihgaps,     {.i = -1 } },
        { MODKEY|Mod4Mask,              XK_7,      incrivgaps,     {.i = +1 } },
        { MODKEY|Mod4Mask|ShiftMask,    XK_7,      incrivgaps,     {.i = -1 } },
        { MODKEY|Mod4Mask,              XK_8,      incrohgaps,     {.i = +1 } },
        { MODKEY|Mod4Mask|ShiftMask,    XK_8,      incrohgaps,     {.i = -1 } },
        { MODKEY|Mod4Mask,              XK_9,      incrovgaps,     {.i = +1 } },
        { MODKEY|Mod4Mask|ShiftMask,    XK_9,      incrovgaps,     {.i = -1 } },
        { MODKEY|Mod4Mask,              XK_0,      togglegaps,     {0} },
        { MODKEY|Mod4Mask|ShiftMask,    XK_0,      defaultgaps,    {0} },
        { MODKEY,                       XK_Tab,    view,           {0} },
        { MODKEY,                       XK_q,      killclient,     {0} },
      /*{ MODKEY|ShiftMask,             XK_c,      killclient,     {0} }, */
        { MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
        { MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
        { MODKEY,                       XK_m,      setlayout,      {.v = &layouts[2]} },
        { MODKEY,                       XK_space,  setlayout,      {0} },
        { MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
        { MODKEY,                       XK_0,      view,           {.ui = ~0 } },
        { MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
        { MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
        { MODKEY,                       XK_period, focusmon,       {.i = +1 } },
        { MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
      /*{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },*/
        { MODKEY,                       XK_period, tagmon,         {.i = +1 } },
        TAGKEYS(                        XK_1,                      0)
        TAGKEYS(                        XK_2,                      1)
        TAGKEYS(                        XK_3,                      2)
        TAGKEYS(                        XK_4,                      3)
        TAGKEYS(                        XK_5,                      4)
        TAGKEYS(                        XK_6,                      5)
        TAGKEYS(                        XK_7,                      6)
        TAGKEYS(                        XK_8,                      7)
        TAGKEYS(                        XK_9,                      8)
        { MODKEY|ShiftMask,             XK_q,      quit,           {0} },
        /* Program key binings */
        { MODKEY,                       XK_w,      spawn,          SHCMD("$BROWSER             ") }, /* $BROWSER set in ~/.zshenv as export BROWSER="firefox" */
        { MODKEY|ShiftMask,             XK_w,      spawn,          SHCMD("tor-browser          ") }, /* Tor browser: Secure browser                           */
        { MODKEY,                       XK_d,      spawn,          SHCMD("$TERMINAL -e newsboat") }, /* newsboat: RSS reader                                  */
        { MODKEY,                       XK_a,      spawn,          SHCMD("$TERMINAL -e irssi   ") }, /* irssi: IRC chat client                                */
        { MODKEY|ShiftMask,             XK_a,      spawn,          SHCMD("mirage               ") }, /* mirage: matrix chat client                            */
				{ MODKEY,                       XK_s,      spawn,          SHCMD("keepassxc            ") }, /* keepassxc: password manager                           */
        { MODKEY,                       XK_m,      spawn,          SHCMD("                     ") }, /* MUSIC PLAYER: coming soon                             */
        { MODKEY,                       XK_n,      spawn,          SHCMD("rtorrent             ") }, /* rtorrent: torrent program                             */

				/* Tools               */
        { MODKEY,                       XK_s,      spawn,          SHCMD("$TERMINAL -e mpv /dev/video0                                                                                          ") }, /* keepassxc: password manager              */
        { MODKEY|ShiftMask,             XK_s,      spawn,          SHCMD("$TERMINAL -e killall screenkey || screenkey && notify-send 'screenkey' 'screenkey started.' --icon=dialog-information ") }, /* screenkey: shows what you type on screen */
        { MODKEY,                       XK_F1,     spawn,          SHCMD("$TERMINAL -e setxkbmap -option caps:escape &                                                                          ") }, /* setxkbmap: remap caps lock               */
        { MODKEY,                       XK_e,      spawn,          SHCMD("$TERMINAL -e ./Scripts/wallc.sh                                                                                       ") }, /* wallc: Costum built wallpaper setter     */
        { MODKEY|ShiftMask,             XK_e,      spawn,          SHCMD("$TERMINAL -e ./Scripts/wall.sh                                                                                       ") }, /* wall: Costum built wallpaper setter     */

        /* Other               */
				{ 0, XF86XK_AudioMute,		      spawn,		SHCMD("pamixer -t; kill -44 $(pidof dwmblocks)") },
				{ 0, XF86XK_AudioRaiseVolume,	  spawn,		SHCMD("pamixer --allow-boost -i 3; kill -44 $(pidof dwmblocks)") },
				{ 0, XF86XK_AudioLowerVolume,	  spawn,		SHCMD("pamixer --allow-boost -d 3; kill -44 $(pidof dwmblocks)") },
				{ 0, XF86XK_AudioPrev,		      spawn,		SHCMD("mpc prev") },
				{ 0, XF86XK_AudioNext,		      spawn,		SHCMD("mpc next") },
				{ 0, XF86XK_AudioPause,					spawn,		SHCMD("mpc pause") },
				{ 0, XF86XK_AudioPlay,					spawn,		SHCMD("mpc play") },
				{ 0, XF86XK_AudioStop,					spawn,		SHCMD("mpc stop") },
				{ 0, XF86XK_AudioRewind,				spawn,		SHCMD("mpc seek -10") },
				{ 0, XF86XK_AudioForward,				spawn,		SHCMD("mpc seek +10") },
				{ 0, XF86XK_AudioMedia,					spawn,		SHCMD(TERMINAL " -e ncmpcpp") },
				{ 0, XF86XK_AudioMicMute,				spawn,		SHCMD("pactl set-source-mute @DEFAULT_SOURCE@ toggle") },
				{ 0, XF86XK_PowerOff,						spawn,		SHCMD("sysact") },
				{ 0, XF86XK_Calculator,					spawn,		SHCMD(TERMINAL " -e bc -l") },
				{ 0, XF86XK_Sleep,							spawn,		SHCMD("sudo -A zzz") },
				{ 0, XF86XK_WWW,								spawn,		SHCMD("$BROWSER") },
				{ 0, XF86XK_DOS,								spawn,		SHCMD(TERMINAL) },
				{ 0, XF86XK_ScreenSaver,				spawn,		SHCMD("slock & xset dpms force off; mpc pause; pauseallmpv") },
				{ 0, XF86XK_TaskPane,						spawn,		SHCMD(TERMINAL " -e htop") },
				{ 0, XF86XK_Mail,								spawn,		SHCMD(TERMINAL " -e neomutt ; pkill -RTMIN+12 dwmblocks") },
				{ 0, XF86XK_MyComputer,					spawn,		SHCMD(TERMINAL " -e lf /") },
				{ 0, XF86XK_Launch1,						spawn,		SHCMD("xset dpms force off") },
				{ 0, XF86XK_TouchpadToggle,			spawn,		SHCMD("(synclient | grep 'TouchpadOff.*1' && synclient TouchpadOff=0) || synclient TouchpadOff=1") },
				{ 0, XF86XK_TouchpadOff,				spawn,		SHCMD("synclient TouchpadOff=1") },
				{ 0, XF86XK_TouchpadOn,					spawn,		SHCMD("synclient TouchpadOff=0") },
				{ 0, XF86XK_MonBrightnessUp,		spawn,		SHCMD("xbacklight -inc 15") },
				{ 0, XF86XK_MonBrightnessDown,	spawn,		SHCMD("xbacklight -dec 15") },
};

