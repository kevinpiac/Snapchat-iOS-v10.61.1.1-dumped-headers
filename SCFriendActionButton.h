//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExtendedHitButton.h"

@class SCFriendActionButtonConfiguration, UILabel;

@interface SCFriendActionButton : SCExtendedHitButton
{
    UILabel *_buttonLabel;
    SCFriendActionButtonConfiguration *_configuration;
}

- (void).cxx_destruct;
- (id)_attributedLabelString;
- (void)_buttonPressed;
- (double)buttonWidth;
@property(retain, nonatomic) SCFriendActionButtonConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)handleButtonPressed;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)updateWithFriendActionButtonsGroupConfiguration:(id)arg1;

@end
