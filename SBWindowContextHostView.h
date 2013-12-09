/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBWindowContextManagerObserver.h"
#import "SpringBoard-Structs.h"

@class NSMutableSet, SBWindowContextHostManager, NSMutableArray, NSSet, SBWindowContextManager, NSMutableOrderedSet, UIScreen;

__attribute__((visibility("hidden")))
@interface SBWindowContextHostView : XXUnknownSuperclass <SBWindowContextManagerObserver> {
	UIScreen* _screen;
	SBWindowContextHostManager* _hostManager;
	SBWindowContextManager* _contextManager;
	NSMutableSet* _hiddenContexts;
	NSMutableOrderedSet* _contexts;
	NSMutableArray* _layerHosts;
}
@property(copy, nonatomic) NSSet* hiddenContexts;
@property(retain, nonatomic) SBWindowContextManager* contextManager;
@property(assign, nonatomic) SBWindowContextHostManager* hostManager;
@property(readonly, assign, nonatomic) UIScreen* screen;
-(void)windowContextManager:(id)manager didRepositionContext:(id)context from:(unsigned)from to:(unsigned)to forScreen:(id)screen;
-(id)description;
-(id)window;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(BOOL)hasContent;
-(BOOL)isHosting;
-(void)_adjustLayerFrameAndTransform:(id)transform;
-(void)dealloc;
-(id)init;
-(id)initWithScreen:(id)screen jailBehavior:(int)behavior;
@end
