/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIActiveOrientationObserver.h"
#import "SBAppSliderControllerDelegate.h"
#import "SBScreenConnectionHandler.h"
#import "SBWallpaperObserver.h"
#import "_UISettingsKeyObserver.h"
#import "UIWindowDelegate.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBSwitchAppGestureView, SBWorkspaceEventQueueLockAssertion, UIWindow, SBAppSliderWindowController, SBAnimationStepper, NSMutableDictionary, UIView, UIStatusBar, NSArray, SBDismissOnlyAlertItem, SBApplication, NSMutableSet, NSMutableArray, SBAppSliderController, NSString;

__attribute__((visibility("hidden")))
@interface SBUIController : XXUnknownSuperclass <SBUIActiveOrientationObserver, SBAppSliderControllerDelegate, SBScreenConnectionHandler, SBWallpaperObserver, _UISettingsKeyObserver, UIWindowDelegate> {
	UIWindow* _window;
	UIView* _iconsView;
	UIView* _contentView;
	UIStatusBar* _fakeSpringBoardStatusBar;
	SBAppSliderController* _switcherController;
	SBAppSliderWindowController* _sliderWindowController;
	SBApplication* _toggleSwitcherAfterLaunchApp;
	NSString* _bundleIDOfResignedApp;
	unsigned _ignoringEvents : 1;
	unsigned _lastVolumeDownToControl : 1;
	unsigned _isBatteryCharging : 1;
	unsigned _isOnAC : 1;
	unsigned _isConnectedToUnsupportedChargingAccessory : 1;
	unsigned _isConnectedToChargeIncapablePowerSource : 1;
	unsigned _allowAlertWindowRotation : 1;
	id _volumeHandler;
	float _batteryCapacity;
	float _curvedBatteryCapacity;
	BOOL _supportsDetailedBatteryCapacity;
	int _batteryLoggingStartCapacity;
	SBDismissOnlyAlertItem* _unsupportedChargerAlert;
	NSMutableDictionary* _installedSystemGestureViews;
	SBAnimationStepper* _suspendAnimationStepper;
	SBAnimationStepper* _statusBarAnimationStepper;
	id _suspendGestureCompleteForwardToEndHandler;
	id _suspendGestureCompleteBackwardToStartHandler;
	BOOL _switcherVisibleWhenSuspendGestureStarted;
	SBWorkspaceEventQueueLockAssertion* _suspendGestureWorkspaceLock;
	BOOL _switcherAnimationRevealing;
	BOOL _switcherAnimationInProgress;
	BOOL _switcherGestureRevealedOrDismissedSwitcher;
	SBSwitchAppGestureView* _switchAppGestureView;
	float _switchAppGesturePreviousPercentage;
	float _switchAppGestureEffectivePercentage;
	float _switchAppGestureInitialPercentage;
	unsigned _switchAppGestureChangedFrames;
	UIView* _systemGestureBackdrop;
	UIView* _pendingGestureLaunchView;
	SBApplication* _pendingAppActivatedByGesture;
	SBApplication* _appCurrentlyActivatingByGesture;
	NSMutableArray* _switchAppFullyOrderedList;
	NSArray* _switchAppFilteredList;
	BOOL _toggleSwitcherAfterLaunchAppUsesSystemGestureOrientation;
	float _ambiguousCCActivationMargin;
	NSMutableSet* _rotationPreventionReasons;
}
+(id)sharedInstanceIfExists;
+(id)sharedInstance;
+(int)displayedLevelForLockScreenBatteryLevel:(int)lockScreenBatteryLevel;
+(CGAffineTransform)_transformAndFrame:(CGRect*)frame forStatusBarWithOrientation:(int)orientation height:(float)height inJailRect:(CGRect)jailRect;
+(id)_zoomViewWithIOSurfaceSnapshotOfApp:(id)app includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner;
+(id)_zoomViewForApplication:(id)application screen:(id)screen interfaceOrientation:(int)orientation includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner snapshotFrame:(CGRect*)frame canUseIOSurface:(BOOL)surface decodeImage:(BOOL)image;
+(id)_zoomViewForApplication:(id)application screen:(id)screen image:(id)image interfaceOrientation:(int)orientation originalImageOrientation:(int)orientation5 currentImageOrientation:(int)orientation6 includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner snapshotFrame:(CGRect*)frame canUseIOSurface:(BOOL)surface decodeImage:(BOOL)image11;
+(id)zoomViewForApplication:(id)application withImage:(id)image originalOrientation:(int)orientation currentOrientation:(int)orientation4;
+(id)zoomViewForContextHostView:(id)contextHostView application:(id)application includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner;
+(id)zoomViewForApplication:(id)application includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner canUseIOSurface:(BOOL)surface decodeImage:(BOOL)image;
+(id)rawZoomViewForApplication:(id)application onScreen:(id)screen;
+(CGRect)snapshotRectForOrientation:(int)orientation statusBarStyleRequest:(id)request hidden:(BOOL)hidden;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(id)_legibilityPrototypeSettings;
-(id)_currentFolderLegibilitySettings;
-(id)_legibilitySettings;
-(void)updateStatusBarLegibility;
-(void)_updateLegibility;
-(void)wallpaperDidChangeForVariant:(int)wallpaper;
-(void)wallpaperLegibilitySettingsDidChange:(id)wallpaperLegibilitySettings forVariant:(int)variant;
-(void)screenManager:(id)manager didTriggerConnectionHandlerEvent:(int)event forScreen:(id)screen;
-(BOOL)screenManager:(id)manager shouldBindConnectionHandlerToScreen:(id)screen;
-(id)switcherController;
-(void)_runAppSliderBringupTest;
-(void)_runAppSliderDismissTest;
-(void)_reloadSwitcherController;
-(void)getRidOfAppSwitcher;
-(void)animateAppSwitcherDismissalToApplication:(id)application withCompletion:(id)completion;
-(void)_switcherFixupIconsViewIfNecessary;
-(void)appSwitcherNeedsToReload:(id)reload;
-(void)appSwitcherWantsToDismissImmediately:(id)dismissImmediately;
-(void)appSwitcher:(id)switcher wantsToActivateApplication:(id)activateApplication;
-(void)_showControlCenterGestureCancelled;
-(void)_showControlCenterGestureFailed;
-(void)_hideControlCenterGrabber;
-(void)_showControlCenterGestureEndedWithLocation:(CGPoint)location velocity:(CGPoint)velocity;
-(void)_showControlCenterGestureChangedWithLocation:(CGPoint)location velocity:(CGPoint)velocity duration:(double)duration;
-(void)_showControlCenterGestureBeganWithLocation:(CGPoint)location;
-(BOOL)allowsShowControlCenterGesture;
-(void)_hideNotificationsGestureCancelled;
-(void)_hideNotificationsGestureEndedWithCompletionType:(int)completionType velocity:(CGPoint)velocity;
-(void)_hideNotificationsGestureChanged:(float)changed;
-(void)_hideNotificationsGestureBegan:(float)began;
-(void)_hideNotificationCenterTabControl;
-(float)showNotificationsTabControlSwipableWidth;
-(void)setAmbiguousControlCenterActivationMargin:(float)margin forApp:(id)app;
-(float)ambiguousControlCenterActivationMargin;
-(BOOL)shouldUseAmbiguousControlCenterActivation;
-(BOOL)shouldShowControlCenterTabControlOnFirstSwipe;
-(BOOL)shouldShowNotificationCenterTabControlOnFirstSwipe;
-(BOOL)_preventShowingTabControls;
-(void)updateShouldShowCenterTabControlsOnFirstSwipe;
-(void)_showNotificationsGestureCancelled;
-(void)_showNotificationsGestureFailed;
-(void)_showNotificationsGestureEndedWithLocation:(CGPoint)location velocity:(CGPoint)velocity;
-(void)_showNotificationsGestureChangedWithLocation:(CGPoint)location velocity:(CGPoint)velocity;
-(void)_showNotificationsGestureBeganWithLocation:(CGPoint)location;
-(void)_switchAppGestureViewAnimationComplete;
-(void)_installSwitchAppGesturePlaceholderViewForEndingApp:(id)endingApp;
-(void)launchApplicationByGesture:(id)gesture;
-(void)launchPendingAppActivatedByGestureIfExists;
-(void)scheduleApplicationForLaunchByGesture:(id)launchByGesture;
-(void)_clearPendingAppActivatedByGesture:(BOOL)gesture;
-(void)clearPendingAppActivatedByGesture;
-(BOOL)hasPendingAppActivatedByGesture;
-(void)cleanupSwitchAppGestureViews;
-(void)programmaticSwitchAppGestureMoveToRight;
-(void)programmaticSwitchAppGestureMoveToLeft;
-(void)programmaticSwitchAppGestureApplyWithPercentage:(float)percentage;
-(void)_switchAppGestureCancelled;
-(void)_switchAppGestureEndedWithCompletionType:(int)completionType cumulativePercentage:(float)percentage;
-(void)_switchAppGestureChanged:(float)changed;
-(void)_switchAppGestureBegan:(float)began;
-(void)prefetchAdjacentAppsAndEvictRemotes:(id)remotes;
-(void)_clearGestureViewVendorCacheForAppWithDisplayIdenitifier:(id)displayIdenitifier;
-(id)_makeSwitchAppFilteredList:(id)list initialApp:(id)app;
-(void)_getSwitchAppPrefetchApps:(id)apps initialApp:(id)app outLeftwardAppIdentifier:(id*)identifier outRightwardAppIdentifier:(id*)identifier4;
-(id)_makeSwitchAppValidList:(id)list;
-(void)removeAppFromSwitchAppList:(id)switchAppList;
-(void)_clearSwitchAppList;
-(id)_calculateSwitchAppList;
-(void)_animateStatusBarForSuspendGesture;
-(void)endRequiringWallpaperForSuspendGestureIfNecessary;
-(void)_suspendGestureCleanUpState;
-(void)_suspendGestureCancelled;
-(void)_suspendGestureEndedWithCompletionType:(int)completionType;
-(BOOL)_suspendGestureShouldFinish;
-(void)_suspendGestureChanged:(float)changed;
-(void)_suspendGestureBegan;
-(void)_switcherGestureCancelled;
-(void)_switcherGestureEndedWithCompletionType:(int)completionType cumulativePercentage:(float)percentage;
-(void)_switcherGestureChanged:(float)changed;
-(void)_switcherGestureBegan;
-(BOOL)_switcherGestureIsBlockedByAppLaunchOrIgnoringEvents;
-(void)cleanupRunningGestureIfNeeded;
-(void)animationStepperFinishBackwardToStartCompleted:(id)startCompleted;
-(BOOL)shouldSendTouchesToSystemGestures;
-(void)notifyAppResumeActive:(id)active;
-(void)notifyAppResignActive:(id)active;
-(void)handleShowControlCenterSystemGesture:(id)gesture;
-(void)handleDismissBannerSystemGesture:(id)gesture;
-(void)handleHideNotificationsSystemGesture:(id)gesture;
-(void)handleShowNotificationsSystemGesture:(id)gesture;
-(void)handleFluidVerticalSystemGesture:(id)gesture;
-(void)handleFluidHorizontalSystemGesture:(id)gesture;
-(void)handleFluidScaleSystemGesture:(id)gesture;
-(BOOL)allowSystemGestureType:(unsigned)type atLocation:(CGPoint)location;
-(void)hideSystemGestureBackdrop;
-(void)showSystemGestureBackdrop;
-(id)systemGestureSnapshotForApp:(id)app includeStatusBar:(BOOL)bar decodeImage:(BOOL)image;
-(id)systemGestureSnapshotWithIOSurfaceSnapshotOfApp:(id)app includeStatusBar:(BOOL)bar;
-(void)_installSystemGestureView:(id)view forKey:(id)key forGesture:(unsigned)gesture;
-(void)_clearAllInstalledSystemGestureViews;
-(void)_clearInstalledSystemGestureViewForKey:(id)key;
-(id)_installedSystemGestureViewForKey:(id)key;
-(id)_systemGestureViewKeyForApp:(id)app;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(unsigned char)headsetBatteryCapacity;
-(BOOL)isHeadsetBatteryCharging;
-(BOOL)isHeadsetDocked;
-(void)activeInterfaceOrientationDidChangeToOrientation:(int)activeInterfaceOrientation willAnimateWithDuration:(double)duration fromOrientation:(int)orientation;
-(void)activeInterfaceOrientationWillChangeToOrientation:(int)activeInterfaceOrientation;
-(void)setAllowSwitcherRotation:(BOOL)rotation forReason:(id)reason;
-(void)setAllowIconRotation:(BOOL)rotation forReason:(id)reason;
-(void)window:(id)window didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)window:(id)window willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(id)rotatingFooterViewForWindow:(id)window;
-(id)rotatingContentViewForWindow:(id)window;
-(BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)animation;
-(void)noteStatusBarHeightChanged:(id)changed;
-(BOOL)supportsDetailedBatteryCapacity;
-(BOOL)isConnectedToUnsupportedChargingAccessory;
-(void)setIsConnectedToUnsupportedChargingAccessory:(BOOL)unsupportedChargingAccessory;
-(void)ACPowerChanged;
-(BOOL)isConnectedToChargeIncapablePowerSource;
-(BOOL)isOnAC;
-(BOOL)isBatteryCharging;
-(int)displayBatteryCapacityAsPercentage;
-(int)curvedBatteryCapacityAsPercentage;
-(float)curvedBatteryCapacity;
-(int)batteryCapacityAsPercentage;
-(float)batteryCapacity;
-(void)updateBatteryState:(id)state;
-(void)cancelVolumeEvent;
-(void)handleVolumeEvent:(IOHIDEventRef)event;
-(float)_contentRotationForOrientation:(int)orientation;
-(CGAffineTransform)_portraitViewTransformForSwitcherSize:(CGSize)switcherSize orientation:(int)orientation;
-(BOOL)_ignoringEvents;
-(void)_resumeEventsIfNecessary;
-(void)requestApplicationEventsEnabledIfNecessary;
-(void)_ignoreEvents;
-(BOOL)_allowSwitcherGesture;
-(BOOL)allowAlertWindowRotation;
-(BOOL)isAppSwitcherShowing;
-(id)_appSliderController;
-(void)dismissSwitcherAnimated:(BOOL)animated;
-(void)_dismissAppSwitcherImmediately;
-(void)dismissSwitcherForAlert:(id)alert;
-(void)openNewsstand;
-(id)switcherWindow;
-(BOOL)_activateAppSwitcherFromSide:(int)side;
-(void)_accessibilityWillBeginAppSwitcherRevealAnimation;
-(float)_appSwitcherRevealAnimationDelay;
-(BOOL)handleMenuDoubleTap;
-(void)_toggleSwitcher;
-(void)_setToggleSwitcherAfterLaunchApp:(id)app;
-(id)_toggleSwitcherAfterLaunchApp;
-(void)_awayControllerActivated:(id)activated;
-(void)_applicationActivationStateDidChange:(id)_applicationActivationState;
-(void)_noteAppDidFailToActivate:(id)_noteApp;
-(void)_noteAppDidActivate:(id)_noteApp;
-(BOOL)clickedMenuButton;
-(BOOL)_handleButtonEventToSuspendDisplays:(BOOL)suspendDisplays displayWasSuspendedOut:(BOOL*)anOut;
-(int)_dismissSheetsAndDetermineAlertStateForMenuClickOrSystemGesture;
-(void)stopRestoringIconList;
-(void)tearDownIconListAndBar;
-(void)restoreIconListForSuspendGesture;
-(void)restoreContentAndUnscatterIconsAnimated:(BOOL)animated withCompletion:(id)completion;
-(void)restoreContentAndUnscatterIconsAnimated:(BOOL)animated;
-(void)restoreContentUpdatingStatusBar:(BOOL)bar;
-(void)restoreContent;
-(void)_closeOpenFolderIfNecessary;
-(void)_hideKeyboard;
-(void)_deviceLockStateChanged:(id)changed;
-(void)_airPlayPasswordAlertWillAppear:(id)_airPlayPasswordAlert;
-(void)_releaseTransitionOrientationLock;
-(void)_releaseSystemGestureOrientationLock;
-(void)releaseSwitcherOrientationLock;
-(void)_lockOrientationForSwitcher;
-(void)_lockOrientationForSystemGesture;
-(void)_lockOrientationForTransition;
-(void)activateURLFromBulletinList:(id)bulletinList;
-(void)activateApplicationAnimatedFromIcon:(id)icon fromLocation:(int)location;
-(void)activateApplicationAnimated:(id)animated;
-(void)launchIcon:(id)icon fromLocation:(int)location;
-(id)window;
-(id)contentView;
-(void)setFakeSpringBoardStatusBarVisible:(BOOL)visible;
-(id)_fakeSpringBoardStatusBar;
-(void)createFakeSpringBoardStatusBarWithStyleRequest:(id)styleRequest;
-(void)createFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(int)style;
-(void)clearFakeSpringBoardStatusBar;
-(void)cleanUpOnFrontLocked;
-(BOOL)promptUnlockForAppActivation:(id)appActivation withCompletion:(id)completion;
-(void)systemControllerRouteChanged:(id)changed;
-(void)finishLaunching;
-(void)_setHidden:(BOOL)hidden;
-(void)animateAppleDown:(BOOL)down;
-(id)init;
-(void)dealloc;
-(void)_indicateConnectedToPower;
@end

