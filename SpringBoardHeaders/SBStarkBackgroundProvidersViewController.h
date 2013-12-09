/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBStarkBackgroundProviderManagerObserver.h"
#import "SpringBoard-Structs.h"
#import "SBStarkBackgroundProviderRemoteViewControllerDelegate.h"

@class _UIAsyncInvocation, SBStarkBackgroundProviderManager, SBStarkBackgroundProvider, SBStarkBackgroundProviderRemoteViewController;
@protocol SBStarkBackgroundProvidersViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkBackgroundProvidersViewController : XXUnknownSuperclass <SBStarkBackgroundProviderManagerObserver, SBStarkBackgroundProviderRemoteViewControllerDelegate> {
	_UIAsyncInvocation* _cancelRequest;
	SBStarkBackgroundProviderManager* _backgroundProviderManager;
	SBStarkBackgroundProviderRemoteViewController* _activeViewController;
	SBStarkBackgroundProvider* _transitioningToProvider;
	CGRect _viewportFrame;
	BOOL _makingInitialTransition;
	BOOL _firstTransitionOccurred;
	id<SBStarkBackgroundProvidersViewControllerDelegate> _delegate;
	unsigned _reactivateAttempt;
	double _lastReactivationAttempt;
}
@property(assign, nonatomic) CGRect viewportFrame;
@property(assign, nonatomic) id<SBStarkBackgroundProvidersViewControllerDelegate> delegate;
-(void)removedBackgroundProvider:(id)provider;
-(void)addedBackgroundProvider:(id)provider;
-(void)didStopProvidingContent:(id)content;
-(void)_providerDidStopProvidingContent:(id)_provider;
-(BOOL)_isVisibleOrTransitioningTo:(id)to;
-(BOOL)_isVisible:(id)visible;
-(BOOL)_isActive:(id)active;
-(void)_animateTo:(id)to withTransition:(int)transition;
-(void)_transitionToProvider:(id)provider withTransition:(int)transition;
-(void)_finishInitialBackgroundTransitionIfNecessary;
-(void)loadView;
-(void)switchToState:(id)state withAnimationName:(id)animationName;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

