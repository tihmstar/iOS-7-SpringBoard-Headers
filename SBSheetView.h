/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBFakeStatusBarView, SBApplication, SBProxyRemoteView;

__attribute__((visibility("hidden")))
@interface SBSheetView : XXUnknownSuperclass {
	SBProxyRemoteView* _remoteProxyView;
	SBApplication* _app;
	SBFakeStatusBarView* _fakeStatusBarView;
	BOOL _wasPresentedAnimated;
}
-(void)dealloc;
-(void)noteSheetDidEnd;
-(BOOL)wasPresentedAnimated;
-(id)fakeStatusBarView;
-(id)application;
-(id)remoteViewIdentifier;
-(id)initWithRemoteViewIdentifier:(id)remoteViewIdentifier application:(id)application shouldFakeStatusBar:(BOOL)bar wasPresentedAnimated:(BOOL)animated;
@end

