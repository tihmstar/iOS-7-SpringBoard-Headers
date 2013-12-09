/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIDynamicItem.h"


__attribute__((visibility("hidden")))
@interface _SBNotificationCenterBouncingItem : XXUnknownSuperclass <UIDynamicItem> {
	CGPoint _center;
	CGRect _bounds;
	id _stepper;
}
@property(assign, nonatomic) CGAffineTransform transform;
@property(readonly, assign, nonatomic) CGRect bounds;
@property(assign, nonatomic) CGPoint center;
@property(assign, nonatomic) CGRect frame;
-(void)setBounds:(CGRect)bounds;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame stepper:(id)stepper;
@end

