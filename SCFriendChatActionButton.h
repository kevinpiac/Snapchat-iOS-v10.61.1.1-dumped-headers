//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFriendActionButton.h"

@protocol SCStartChatDelegate;

@interface SCFriendChatActionButton : SCFriendActionButton
{
    id <SCStartChatDelegate> _startChatDelegate;
}

- (void).cxx_destruct;
- (void)handleButtonPressed;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 startChatDelegate:(id)arg3;
- (void)updateWithFriendActionButtonsGroupConfiguration:(id)arg1;

@end
