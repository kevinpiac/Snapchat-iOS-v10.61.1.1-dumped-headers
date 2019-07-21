//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface SCAdWebViewConfigurationBuilder : NSObject
{
    NSURL *_url;
    _Bool _enableAutoFill;
    _Bool _reportJavaScriptPerformance;
    _Bool _sharable;
    _Bool _enableHeaderActionButton;
    _Bool _enablePreloading;
    _Bool _disableSwipeDownToDismiss;
    _Bool _delayLoadUntilWebviewScheduledToTakeOver;
}

+ (id)adWebViewConfiguration;
+ (id)adWebViewConfigurationFromExistingAdWebViewConfiguration:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withDelayLoadUntilWebviewScheduledToTakeOver:(_Bool)arg1;
- (id)withDisableSwipeDownToDismiss:(_Bool)arg1;
- (id)withEnableAutoFill:(_Bool)arg1;
- (id)withEnableHeaderActionButton:(_Bool)arg1;
- (id)withEnablePreloading:(_Bool)arg1;
- (id)withReportJavaScriptPerformance:(_Bool)arg1;
- (id)withSharable:(_Bool)arg1;
- (id)withUrl:(id)arg1;

@end

