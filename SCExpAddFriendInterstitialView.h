//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

@class TTTAttributedLabel, UIImageView, UILabel;

@interface SCExpAddFriendInterstitialView : SCRegisterV2BaseView
{
    struct UIEdgeInsets _horizontalInsets;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIImageView *_giraffe;
    TTTAttributedLabel *_ppLabel;
}

- (void).cxx_destruct;
- (void)_initGiraffe;
- (void)_initPrivacyPolicyLabel;
- (void)_initTopLabels;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 baseColorPalette:(unsigned long long)arg3;
@property(retain, nonatomic) TTTAttributedLabel *ppLabel; // @synthesize ppLabel=_ppLabel;

@end

