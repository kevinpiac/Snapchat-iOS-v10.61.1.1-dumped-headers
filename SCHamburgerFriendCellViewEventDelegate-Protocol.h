//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Friend, SCHamburgerFriendCellView, UIView;

@protocol SCHamburgerFriendCellViewEventDelegate <NSObject>
- (void)hamburgerFriendCellView:(SCHamburgerFriendCellView *)arg1 didPressOnStoryIcon:(UIView *)arg2;
- (void)hamburgerFriendCellView:(SCHamburgerFriendCellView *)arg1 didTapAddFriend:(Friend *)arg2;
- (void)hamburgerFriendCellViewDidPressOnBitmoji:(SCHamburgerFriendCellView *)arg1;
@end

