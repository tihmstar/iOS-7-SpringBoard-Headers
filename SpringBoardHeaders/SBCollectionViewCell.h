/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SBCollectionViewCell : XXUnknownSuperclass {
	id<SBCollectionViewCellDelegate> _delegate;
	BOOL _performSetHighlighted;
	BOOL _protectDelayedUnhighlights;
}
@property(assign, nonatomic) BOOL protectDelayedUnhighlights;
@property(assign, nonatomic) id<SBCollectionViewCellDelegate> delegate;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setHighlighted:(BOOL)highlighted afterDelay:(double)delay;
-(void)_performSetHighlighted;
-(void)_didSetHighlighted:(BOOL)highlighted;
@end

