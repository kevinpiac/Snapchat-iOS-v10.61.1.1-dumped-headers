//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface SCDiscoverFeedS2RNetworkInfo : NSObject <NSCopying, NSCoding>
{
    NSString *_requestId;
    NSDate *_logTime;
    NSString *_requestInfo;
    NSString *_responseInfo;
    NSString *_responseType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestId:(id)arg1 logTime:(id)arg2 requestInfo:(id)arg3 responseInfo:(id)arg4 responseType:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *logTime; // @synthesize logTime=_logTime;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, copy, nonatomic) NSString *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(readonly, copy, nonatomic) NSString *responseInfo; // @synthesize responseInfo=_responseInfo;
@property(readonly, copy, nonatomic) NSString *responseType; // @synthesize responseType=_responseType;

@end

