//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCGrowingButton;
@protocol SCCameraScreenBadgingStateProvider, SCFeatureLensSideButton, SCFeatureLensSideButtonUpdateProvider;

@protocol SCFeatureLensSideButtonDelegate <NSObject>
- (void)featureLensSideButton:(id <SCFeatureLensSideButton>)arg1 didPressLensButton:(SCGrowingButton *)arg2;
- (id <SCCameraScreenBadgingStateProvider>)featureLensSideButtonBadgingUpdateProvider;
- (id <SCFeatureLensSideButtonUpdateProvider>)featureLensSideButtonUpdateProvider;
@end

