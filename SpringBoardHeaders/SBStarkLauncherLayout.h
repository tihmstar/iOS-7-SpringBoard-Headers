/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;
@protocol SBStarkLauncherLayoutDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkLauncherLayout : XXUnknownSuperclass {
	id<SBStarkLauncherLayoutDelegate> _delegate;
	unsigned _numberOfItems;
	CGSize _itemSize;
	NSArray* _attributesByItem;
	BOOL _layoutForScrollButtons;
	UIEdgeInsets _scrollButtonInsets;
}
@property(readonly, assign, nonatomic) UIEdgeInsets scrollButtonInsets;
@property(assign, nonatomic) BOOL layoutForScrollButtons;
@property(assign, nonatomic) float itemHeight;
@property(assign, nonatomic) id<SBStarkLauncherLayoutDelegate> delegate;
+(Class)layoutAttributesClass;
+(float)desiredItemHeightForWidth:(float)width;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)indexPath;
-(id)layoutAttributesForElementsInRect:(CGRect)rect;
-(void)prepareLayout;
-(void)dealloc;
@end

