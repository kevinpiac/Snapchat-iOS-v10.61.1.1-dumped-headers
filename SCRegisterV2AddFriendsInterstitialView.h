//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

#import "SCAddFriendsInterstitialView-Protocol.h"

@class TTTAttributedLabel, UILabel;

@interface SCRegisterV2AddFriendsInterstitialView : SCRegisterV2BaseView <SCAddFriendsInterstitialView>
{
    struct UIEdgeInsets _horizontalInsets;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    TTTAttributedLabel *_privacyPolicyLabel;
}

- (void).cxx_destruct;
- (_Bool)hasAllowButton;
- (_Bool)hasDenyButton;
- (void)initDescription;
- (void)initGiraffe;
- (void)initPrivacyPolicyLabel;
- (void)initTitle;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 baseColorPalette:(unsigned long long)arg3;
@property(retain, nonatomic) TTTAttributedLabel *privacyPolicyLabel; // @synthesize privacyPolicyLabel=_privacyPolicyLabel;

@end

