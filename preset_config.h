/* speedie's maomao config */

#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

/* animaion */
char *animation_type = "slide"; //是否启用动画 //slide,zoom
int animations = 1; //是否启用动画
char animation_fade_in = 1; // Enable animation fade in
float zoom_initial_ratio = 0.5; //动画起始窗口比例
float fadein_begin_opacity = 0; // Begin opac window ratio for animations
uint32_t animation_duration_move = 500; // Animation move speed
uint32_t animation_duration_open = 400; // Animation open speed
uint32_t animation_duration_tag = 300; // Animation tag speed
double animation_curve[4] = {0.46,1.0,0.29,0.99}; //动画曲线

/* appearance */
unsigned int axis_bind_apply_timeout = 100; //滚轮绑定动作的触发的时间间隔
unsigned int focus_on_activate = 1; //收到窗口激活请求是否自动跳转聚焦
unsigned int new_is_master = 1; //新窗口是否插在头部
unsigned int default_mfact = 0.55f; // master 窗口比例
unsigned int default_nmaster = 1; //默认master数量
/* logging */
int log_level = WLR_ERROR;
unsigned int numlockon = 1; //是否打开右边小键盘

unsigned int ov_tab_mode = 0; // alt tab切换模式
unsigned int hotarea_size              = 10; //热区大小,10x10
unsigned int enable_hotarea            = 1; //是否启用鼠标热区
int smartgaps                 = 0;  /* 1 means no outer gap when there is only one window */
int sloppyfocus               = 1;  /* focus follows mouse */
unsigned int gappih           = 5; /* horiz inner gap between windows */
unsigned int gappiv           = 5; /* vert inner gap between windows */
unsigned int gappoh           = 10; /* horiz outer gap between windows and screen edge */
unsigned int gappov           = 10; /* vert outer gap between windows and screen edge */


int scroller_structs = 20;
float scroller_default_proportion = 0.9;
int scoller_focus_center = 0;
float scroller_proportion_preset[] = {0.5,0.9,1.0};

int bypass_surface_visibility = 0;  /* 1 means idle inhibitors will disable idle tracking even if it's surface isn't visible  */
unsigned int borderpx         = 4;  /* border pixel of windows */
float rootcolor[]             = COLOR(0x323232ff);
float bordercolor[]           = COLOR(0x444444ff);
float focuscolor[]            = COLOR(0xc66b25ff);
float maxmizescreencolor[]   = COLOR(0x89aa61ff);
float urgentcolor[]           = COLOR(0xad401fff);
float scratchpadcolor[]       = COLOR(0x516c93ff);
float globalcolor[]       	   = COLOR(0xb153a7ff);
// char *cursor_theme = "Bibata-Modern-Ice";

int overviewgappi = 5; /* overview时 窗口与边缘 缝隙大小 */
int overviewgappo = 30; /* overview时 窗口与窗口 缝隙大小 */

/* To conform the xdg-protocol, set the alpha to zero to restore the old behavior */
float fullscreen_bg[]         = {0.1, 0.1, 0.1, 1.0};

int warpcursor = 1; /* Warp cursor to focused client */


/* layout(s) */
Layout overviewlayout = { "󰃇",  overview, "overview" };

Layout layouts[] = { //最少两个,不能删除少于两个
	/* symbol     arrange function   name */
	{ "⬌",      scroller, "scroller" },	//滚动布局
	{ "󱞬",      tile, "tile" },	//堆栈布局
	{"󰃇", grid, "grid"},
	{"M",monocle,"monocle"},
};



/* keyboard */
struct xkb_rule_names xkb_rules = {
	/* can specify fields: rules, model, layout, variant, options */
	/* example:
	.options = "ctrl:nocaps",
	*/
	.options = NULL,
};

int repeat_rate = 25;
int repeat_delay = 600;

/* Trackpad */
int tap_to_click = 1;
int tap_and_drag = 1;
int drag_lock = 1;
int natural_scrolling = 0;
int disable_while_typing = 1;
int left_handed = 0;
int middle_button_emulation = 0;
/* You can choose between:
LIBINPUT_CONFIG_SCROLL_NO_SCROLL
LIBINPUT_CONFIG_SCROLL_2FG
LIBINPUT_CONFIG_SCROLL_EDGE
LIBINPUT_CONFIG_SCROLL_ON_BUTTON_DOWN
*/
enum libinput_config_scroll_method scroll_method = LIBINPUT_CONFIG_SCROLL_2FG;

/* You can choose between:
LIBINPUT_CONFIG_CLICK_METHOD_NONE
LIBINPUT_CONFIG_CLICK_METHOD_BUTTON_AREAS
LIBINPUT_CONFIG_CLICK_METHOD_CLICKFINGER
*/
enum libinput_config_click_method click_method = LIBINPUT_CONFIG_CLICK_METHOD_BUTTON_AREAS;

/* You can choose between:
LIBINPUT_CONFIG_SEND_EVENTS_ENABLED
LIBINPUT_CONFIG_SEND_EVENTS_DISABLED
LIBINPUT_CONFIG_SEND_EVENTS_DISABLED_ON_EXTERNAL_MOUSE
*/
uint32_t send_events_mode = LIBINPUT_CONFIG_SEND_EVENTS_ENABLED;

/* You can choose between:
LIBINPUT_CONFIG_ACCEL_PROFILE_FLAT
LIBINPUT_CONFIG_ACCEL_PROFILE_ADAPTIVE
*/
enum libinput_config_accel_profile accel_profile = LIBINPUT_CONFIG_ACCEL_PROFILE_ADAPTIVE;
double accel_speed = 0.0;
/* You can choose between:
LIBINPUT_CONFIG_TAP_MAP_LRM -- 1/2/3 finger tap maps to left/right/middle
LIBINPUT_CONFIG_TAP_MAP_LMR -- 1/2/3 finger tap maps to left/middle/right
*/
enum libinput_config_tap_button_map button_map = LIBINPUT_CONFIG_TAP_MAP_LRM;

/* If you want to use the windows key for MODKEY, use WLR_MODIFIER_LOGO */
#define MODKEY WLR_MODIFIER_ALT

static const char *tags[] = {
    "1",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8",
    "9",
};

static const char *const autostart[] = {
	"/bin/sh",
	"-c",
	"~/.config/maomao/autostart.sh",
	NULL,
	NULL,
};