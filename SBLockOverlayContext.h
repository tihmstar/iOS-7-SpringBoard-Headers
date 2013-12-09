/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBLockOverlayViewController;

__attribute__((visibility("hidden")))
@interface SBLockOverlayContext : XXUnknownSuperclass {
	SBLockOverlayViewController* _viewController;
	unsigned _priority;
	id _activationBlock;
	id _deactivationBlock;
}
@property(copy, nonatomic) id deactivationBlock;
@property(copy, nonatomic) id activationBlock;
@property(readonly, assign, nonatomic) unsigned priority;
@property(readonly, assign, nonatomic) SBLockOverlayViewController* viewController;
-(void)dealloc;
-(id)initWithOverlayViewController:(id)overlayViewController priority:(unsigned)priority;
@end

