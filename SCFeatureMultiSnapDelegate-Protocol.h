//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, SCMultiSnapConfiguration, UIViewController;
@protocol SCFeatureMultiSnap;

@protocol SCFeatureMultiSnapDelegate
- (void)featureMultiSnap:(id <SCFeatureMultiSnap>)arg1 didRecoverWithMultiSnapConfiguration:(SCMultiSnapConfiguration *)arg2 startRecordingTimestamp:(NSDate *)arg3;
- (void)featureMultiSnap:(id <SCFeatureMultiSnap>)arg1 willDisplayWithViewController:(UIViewController *)arg2;
- (void)featureMultiSnap:(id <SCFeatureMultiSnap>)arg1 willResetWithViewController:(UIViewController *)arg2;
@end
