//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCReportAdapter : NSObject
{
}

+ (id)shared;
+ (void)showNotificationWithSuccess:(_Bool)arg1;
- (void)_sendChatMessageV3ReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendAdReport;
- (void)sendDiscoverTileReport:(id)arg1 userSession:(id)arg2;
- (void)sendLensReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendMapStoryReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendPublicUserStoriesReport:(id)arg1 userSession:(id)arg2;
- (void)sendPublisherStoryReport:(id)arg1 userSession:(id)arg2;
- (void)sendReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendSearchDynamicStoryReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendSnapReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendStoryReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendUserReportWithContext:(id)arg1 userSession:(id)arg2;

@end
