//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray;

@protocol SCNMessagingQueryFeedCallback
- (void)onBootstrapNotComplete;
- (void)onError:(long long)arg1;
- (void)onQueryFeedComplete:(NSArray *)arg1 hasNoMore:(_Bool)arg2;
@end

