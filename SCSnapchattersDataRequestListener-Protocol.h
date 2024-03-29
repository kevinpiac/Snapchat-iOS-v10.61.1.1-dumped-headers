//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSnapchattersContactDataRequest, SCSnapchattersContactDataRequestResult, SCSnapchattersFetchDataRequest, SCSnapchattersSuggestDataRequest, SCSnapchattersUpdateDataRequest;

@protocol SCSnapchattersDataRequestListener <NSObject>
- (void)didEndSnapchattersUpdateDataRequest:(SCSnapchattersUpdateDataRequest *)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(SCSnapchattersUpdateDataRequest *)arg1;

@optional
- (void)didEndSnapchattersContactDataRequest:(SCSnapchattersContactDataRequest *)arg1 withResult:(SCSnapchattersContactDataRequestResult *)arg2;
- (void)didEndSnapchattersFetchDataRequest:(SCSnapchattersFetchDataRequest *)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersSuggestDataRequest:(SCSnapchattersSuggestDataRequest *)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersContactDataRequest:(SCSnapchattersContactDataRequest *)arg1;
- (void)didStartSnapchattersFetchDataRequest:(SCSnapchattersFetchDataRequest *)arg1;
- (void)didStartSnapchattersSuggestDataRequest:(SCSnapchattersSuggestDataRequest *)arg1;
@end

