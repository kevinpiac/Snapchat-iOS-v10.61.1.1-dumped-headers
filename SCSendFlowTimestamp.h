//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSendFlowTimestamp : NSObject <NSCopying>
{
    NSString *_messageId;
    NSString *_mediaId;
    long long _stepType;
    double _timestamp;
    long long _timestampType;
    unsigned long long _result;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasValidMediaEndTimestamp:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMessageId:(id)arg1 mediaId:(id)arg2 stepType:(long long)arg3 timestamp:(double)arg4 timestampType:(long long)arg5 result:(unsigned long long)arg6;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isInMediaOrchestration;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) unsigned long long result; // @synthesize result=_result;
@property(readonly, nonatomic) long long stepType; // @synthesize stepType=_stepType;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long timestampType; // @synthesize timestampType=_timestampType;

@end

