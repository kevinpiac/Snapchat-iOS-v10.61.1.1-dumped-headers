//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGrowingButton.h"

@class CAShapeLayer;

@interface SCMapLocationSettingsButton : SCGrowingButton
{
    _Bool _hasSetAppearanceMode;
    CAShapeLayer *_badgeLayer;
    long long _appearanceMode;
}

- (void).cxx_destruct;
@property(nonatomic) long long appearanceMode; // @synthesize appearanceMode=_appearanceMode;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBadged:(_Bool)arg1 animated:(_Bool)arg2;

@end

