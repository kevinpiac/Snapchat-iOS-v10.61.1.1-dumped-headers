//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCEagleLoggingHelper : NSObject
{
    NSString *_sessionId;
    NSString *_queryId;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)dismissScanResultsWithEventListener:(id)arg1 announcerIdentifier:(id)arg2;
@property(readonly, copy, nonatomic) NSString *queryId; // @synthesize queryId=_queryId;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)startSessionWithSessionId:(id)arg1 eventListener:(id)arg2 announcerIdentifier:(id)arg3;
- (void)updateQueryId:(long long)arg1;

@end

