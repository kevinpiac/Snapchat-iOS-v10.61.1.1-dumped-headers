//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol SCFeatureWidenedFOV
- (_Bool)isFeatureEnabledAndSupported;
- (struct CGRect)maxMediaAreaFrame;
@property(readonly, nonatomic) double previewVerticalOffset;
- (struct UIEdgeInsets)safeAreaInsets;
- (struct UIEdgeInsets)safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (struct UIEdgeInsets)safeAreaInsetsForInterfaceOrientation:(long long)arg1 withExistingInsets:(struct UIEdgeInsets)arg2;
- (struct UIEdgeInsets)safeAreaInsetsWithExistingInsets:(struct UIEdgeInsets)arg1;
@end
