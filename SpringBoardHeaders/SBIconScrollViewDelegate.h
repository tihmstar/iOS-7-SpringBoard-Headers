/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIScrollViewDelegate.h"
#import "SpringBoard-Structs.h"


@protocol SBIconScrollViewDelegate <UIScrollViewDelegate>
-(void)iconScrollView:(id)view willSetContentOffset:(inout CGPoint*)offset;
-(void)iconScrollViewDidCancelTouchTracking:(id)iconScrollView;
-(void)iconScrollViewWillCancelTouchTracking:(id)iconScrollView;
@end
