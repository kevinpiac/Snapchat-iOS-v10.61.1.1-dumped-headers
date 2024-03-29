//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCReceiveMessageTimestamp : NSObject <NSCopying>
{
    NSString *_messageId;
    long long _step;
    double _timestamp;
    long long _timestampType;
    long long _result;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithMessageId:(id)arg1 step:(long long)arg2 timestamp:(double)arg3 timestampType:(long long)arg4 result:(long long)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) long long result; // @synthesize result=_result;
@property(readonly, nonatomic) long long step; // @synthesize step=_step;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long timestampType; // @synthesize timestampType=_timestampType;

@end

