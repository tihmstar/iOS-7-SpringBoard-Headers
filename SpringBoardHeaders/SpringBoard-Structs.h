/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

typedef struct _NSZone NSZone;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	BOOL _field1;
	BOOL _field2;
	BOOL _field3;
	BOOL _field4;
	float _field5;
	int _field6;
} XXStruct_3uUjXA;

typedef struct _NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct {
	unsigned long _field1;
	id* _field2;
	unsigned long* _field3;
	unsigned long _field4[5];
} XXStruct_kFm5bA;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct CGColor* CGColorRef;

typedef struct {
	BOOL itemIsEnabled[25];
	BOOL timeString[64];
	int gsmSignalStrengthRaw;
	int gsmSignalStrengthBars;
	BOOL serviceString[100];
	BOOL serviceCrossfadeString[100];
	BOOL serviceImages[2][100];
	BOOL operatorDirectory[1024];
	unsigned serviceContentType;
	int wifiSignalStrengthRaw;
	int wifiSignalStrengthBars;
	unsigned dataNetworkType;
	int batteryCapacity;
	unsigned batteryState;
	BOOL batteryDetailString[150];
	int bluetoothBatteryCapacity;
	int thermalColor;
	unsigned thermalSunlightMode : 1;
	unsigned slowActivity : 1;
	unsigned syncActivity : 1;
	BOOL activityDisplayId[256];
	unsigned bluetoothConnected : 1;
	unsigned displayRawGSMSignal : 1;
	unsigned displayRawWifiSignal : 1;
	unsigned locationIconType : 1;
	unsigned quietModeInactive : 1;
	unsigned tetheringConnectionCount;
} XXStruct_8iXKhD;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct __darwin_pthread_handler_rec darwin_pthread_handler_rec;

typedef struct _opaque_pthread_t {
	long _field1;
	darwin_pthread_handler_rec* _field2;
	BOOL _field3[596];
} opaque_pthread_t;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct __GSEvent* GSEventRef;

typedef struct SBIconCoordinate {
	int row;
	int col;
} SBIconCoordinate;

typedef struct _opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned _field1[8];
} XXStruct_kUSYWB;

typedef struct tcp_connection_fallback_watch_s tcp_connection_fallback_watch_s;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct __CFString* CFStringRef;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct BKSDisplayBrightnessTransaction* BKSDisplayBrightnessTransactionRef;

typedef struct MGNotificationTokenStruct* MGNotificationTokenStructRef;

typedef struct {
	int startStyle;
	int endStyle;
	float transitionFraction;
} XXStruct_S5WqmA;

typedef struct {
	BOOL valid;
	XXStruct_S5WqmA styleTransitionState;
} XXStruct_Dov64B;

typedef struct {
	int type;
	int modifier;
	unsigned pathIndex;
	unsigned pathIdentity;
	CGPoint location;
	CGPoint previousLocation;
	CGPoint unrotatedLocation;
	CGPoint previousUnrotatedLocation;
	float totalDistanceTraveled;
	int interfaceOrientation;
	int previousInterfaceOrientation;
	double timestamp;
} XXStruct_XgRpiA;

typedef struct __SBGestureContext* SBGestureContextRef;

typedef struct SBBannerDismissGestureState {
	BOOL _field1;
	BOOL _field2;
	CGSize _field3;
	CGSize _field4;
	CGRect _field5;
	int _field6;
	float _field7;
	BOOL _field8;
} SBBannerDismissGestureState;

typedef struct _CARenderImage* CARenderImageRef;

typedef struct {
	unsigned willActivate : 1;
	unsigned didActivate : 1;
	unsigned willDeactivate : 1;
	unsigned didDeactivate : 1;
	unsigned didChangeTop : 1;
	unsigned topBgStyleChange : 1;
	unsigned willTearDownWindow : 1;
	unsigned didTearDownWindow : 1;
	unsigned didRemoveFromWindow : 1;
} XXStruct_IrbmYC;

typedef struct CGImage* CGImageRef;

typedef struct SBWindowLevelRange_struct {
	float start;
	float end;
} SBWindowLevelRange_struct;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	id _field1;
	id _field2;
	id _field3;
	id _field4;
} XXStruct_Xx1ZfA;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGContext* CGContextRef;


