/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBCardItemsControllerRemoteInterface <NSObject>
-(void)getCardItemsForControllerWithIdentifier:(id)identifier withHandler:(id)handler;
-(void)clearCardItemsForControllerWithIdentifier:(id)identifier;
-(void)setCardItems:(id)items forControllerWithIdentifier:(id)identifier;
-(void)removeCardItems:(id)items forControllerWithIdentifier:(id)identifier;
-(void)addCardItems:(id)items forControllerWithIdentifier:(id)identifier;
-(void)cardItemsDidChange:(id)cardItems forControllerWithIdentifier:(id)identifier;
@end

