//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUChatv3SnapStateMessage-Protocol.h"

@class NSDictionary, NSNumber, NSString, SOJUHeader;

@interface SOJUChatv3SnapStateMessage : NSObject <SOJUChatv3SnapStateMessage>
{
    SOJUHeader *_header;
    NSNumber *_retried;
    NSDictionary *_knownChatSequenceNumbers;
    NSNumber *_mischiefVersion;
    NSNumber *_seqNum;
    NSNumber *_timestamp;
    NSString *_type;
    NSString *_idValue;
    NSString *_appEngineTarget;
    NSString *_chatMessageId;
    NSString *_state;
    NSNumber *_screenshotCount;
    NSString *_senderChatMediaId;
    NSNumber *_openTimestamp;
    NSNumber *_screenCaptureShotCount;
    NSNumber *_screenCaptureRecordingCount;
    NSNumber *_chatMessageSeqNum;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appEngineTarget; // @synthesize appEngineTarget=_appEngineTarget;
@property(readonly, copy, nonatomic) NSString *chatMessageId; // @synthesize chatMessageId=_chatMessageId;
@property(readonly, copy, nonatomic) NSNumber *chatMessageSeqNum; // @synthesize chatMessageSeqNum=_chatMessageSeqNum;
- (long long)chatMessageSeqNumValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) SOJUHeader *header; // @synthesize header=_header;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeader:(id)arg1 retried:(id)arg2 knownChatSequenceNumbers:(id)arg3 mischiefVersion:(id)arg4 seqNum:(id)arg5 timestamp:(id)arg6 type:(id)arg7 idValue:(id)arg8 appEngineTarget:(id)arg9 chatMessageId:(id)arg10 state:(id)arg11 screenshotCount:(id)arg12 senderChatMediaId:(id)arg13 openTimestamp:(id)arg14 screenCaptureShotCount:(id)arg15 screenCaptureRecordingCount:(id)arg16 chatMessageSeqNum:(id)arg17;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *knownChatSequenceNumbers; // @synthesize knownChatSequenceNumbers=_knownChatSequenceNumbers;
@property(readonly, copy, nonatomic) NSNumber *mischiefVersion; // @synthesize mischiefVersion=_mischiefVersion;
- (long long)mischiefVersionValue;
@property(readonly, copy, nonatomic) NSNumber *openTimestamp; // @synthesize openTimestamp=_openTimestamp;
- (long long)openTimestampValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *retried; // @synthesize retried=_retried;
- (_Bool)retriedValue;
@property(readonly, copy, nonatomic) NSNumber *screenCaptureRecordingCount; // @synthesize screenCaptureRecordingCount=_screenCaptureRecordingCount;
- (long long)screenCaptureRecordingCountValue;
@property(readonly, copy, nonatomic) NSNumber *screenCaptureShotCount; // @synthesize screenCaptureShotCount=_screenCaptureShotCount;
- (long long)screenCaptureShotCountValue;
@property(readonly, copy, nonatomic) NSNumber *screenshotCount; // @synthesize screenshotCount=_screenshotCount;
- (long long)screenshotCountValue;
@property(readonly, copy, nonatomic) NSString *senderChatMediaId; // @synthesize senderChatMediaId=_senderChatMediaId;
@property(readonly, copy, nonatomic) NSNumber *seqNum; // @synthesize seqNum=_seqNum;
- (long long)seqNumValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *state; // @synthesize state=_state;
- (long long)stateEnum;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
- (long long)timestampValue;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (long long)typeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

