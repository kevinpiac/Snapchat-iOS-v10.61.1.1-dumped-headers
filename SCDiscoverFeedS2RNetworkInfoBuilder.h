//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCDiscoverFeedS2RNetworkInfoBuilder : NSObject
{
    NSString *_requestId;
    NSDate *_logTime;
    NSString *_requestInfo;
    NSString *_responseInfo;
    NSString *_responseType;
}

+ (id)discoverFeedS2RNetworkInfo;
+ (id)discoverFeedS2RNetworkInfoFromExistingDiscoverFeedS2RNetworkInfo:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withLogTime:(id)arg1;
- (id)withRequestId:(id)arg1;
- (id)withRequestInfo:(id)arg1;
- (id)withResponseInfo:(id)arg1;
- (id)withResponseType:(id)arg1;

@end

