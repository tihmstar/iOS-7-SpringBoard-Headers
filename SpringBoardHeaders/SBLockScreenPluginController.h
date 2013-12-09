/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "_UISettingsKeyObserver.h"
#import "SpringBoard-Structs.h"

@class SBLockScreenPluginLoader, NSMutableDictionary, SBLockScreenPlugin, SBLockScreenTestPluginSettings, UIWindow, SBLockScreenPluginTransitionFactory, SBLockScreenViewController;
@protocol SBLockScreenPluginControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenPluginController : XXUnknownSuperclass <_UISettingsKeyObserver> {
	SBLockScreenPluginLoader* _pluginLoader;
	NSMutableDictionary* _plugins;
	SBLockScreenPlugin* _activePlugin;
	SBLockScreenPlugin* _displayedPlugin;
	SBLockScreenPluginTransitionFactory* _transitionFactory;
	id<SBLockScreenPluginControllerDelegate> _delegate;
	SBLockScreenViewController* _lockScreenViewController;
	BOOL _pluginControllerReceivedViewWillDisappear;
	BOOL _pluginControllerReceivedViewDidDisappear;
	UIWindow* _previousWindow;
	SBLockScreenTestPluginSettings* _testSettings;
	BOOL _lockScreenHasNotifications;
	BOOL _allowDisplayOfPlugins;
	float _fadeDuration;
}
@property(assign) float fadeDuration;
@property(assign, nonatomic) BOOL allowDisplayOfPlugins;
@property(assign, nonatomic) BOOL lockScreenHasNotifications;
@property(assign, nonatomic) id<SBLockScreenPluginControllerDelegate> delegate;
@property(retain, nonatomic) SBLockScreenPluginLoader* pluginLoader;
@property(assign, nonatomic) SBLockScreenViewController* lockScreenViewController;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(BOOL)_pluginHidesNotificationList:(id)list;
-(void)_updateNotificationListForNewlyActivatedPlugin;
-(void)_transitionFromNotificationListToExclusionaryPlugin;
-(void)_transitionFromExclusionaryPluginToNotificationList;
-(void)_notifyDisplayedPluginRemovedFromWindow;
-(void)_notifyDisplayedPluginAddedToWindow;
-(void)_lockScreenDidMoveToWindow;
-(void)_lockScreenWillMoveToWindow;
-(void)_disablePluginsPassingTest:(id)test withReason:(id)reason;
-(void)_removeActivePlugin;
-(void)_removeDisplayedPlugin;
-(void)_handleUIRelock;
-(void)handleUIUnlock;
-(id)_pluginForName:(id)name controller:(id)controller;
-(void)_loadLockScreenPluginWithName:(id)name activationContext:(id)context;
-(void)disableLockScreenBundleWithName:(id)name deactivationContext:(id)context;
-(void)_handlePluginDisable:(id)disable;
-(id)_transitionContextWithOldPlugin:(id)oldPlugin newPlugin:(id)plugin;
-(void)_updateCallPluginPresentationStyle;
-(void)_setEffectivePresentationStyleForDisplayedPluginIfNecessary;
-(void)_setDisplayedPlugin:(id)plugin;
-(void)_setActivePlugin:(id)plugin;
-(BOOL)isPhonePluginVisible;
-(BOOL)isPhonePluginActive;
-(void)_refreshLockScreenPlugin;
-(void)reset;
-(void)enableLockScreenBundleWithName:(id)name activationContext:(id)context;
-(id)_pluginView;
-(id)_lockScreenView;
-(BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleLockButtonPressed;
-(BOOL)handleMenuButtonHeld;
-(BOOL)wantsMenuButtonHeldEvent;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)handleMenuButtonTap;
-(BOOL)sendEventToPlugin:(id)plugin;
-(id)_highestPriorityPluginIgnoringViewDisplay:(BOOL)display;
-(BOOL)pluginControllerShouldAnimateOthersResumption;
-(CGRect)defaultContentRegionForPluginController:(id)pluginController withOrientation:(int)orientation;
-(BOOL)activePluginHidesNotificationList;
-(id)activePluginBundleName;
-(id)displayedPlugin;
-(id)activePlugin;
-(BOOL)isPluginVisible;
-(void)dealloc;
-(void)_addObservers;
-(id)initWithLockScreenViewController:(id)lockScreenViewController;
@end

