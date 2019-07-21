//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUSupportToolsShakeTicketOtherInfo-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUSupportToolsShakeTicketOtherInfo : NSObject <SOJUSupportToolsShakeTicketOtherInfo>
{
    NSNumber *_isAutoTicket;
    NSArray *_options;
    NSString *_sourceScreen;
    NSString *_sourceScreenFeatureTeam;
    NSString *_jiraMetaInfo;
    NSString *_tweaksInfo;
    NSNumber *_hasScreenCaptured;
    NSNumber *_hasVideoAttached;
    NSNumber *_hasCameraRollAttachment;
    NSArray *_cameraRollAttachmentsFileNames;
    NSNumber *_isFromMushroom;
    NSString *_arroyoMode;
    NSString *_lastCrashId;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *arroyoMode; // @synthesize arroyoMode=_arroyoMode;
@property(readonly, copy, nonatomic) NSArray *cameraRollAttachmentsFileNames; // @synthesize cameraRollAttachmentsFileNames=_cameraRollAttachmentsFileNames;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *hasCameraRollAttachment; // @synthesize hasCameraRollAttachment=_hasCameraRollAttachment;
- (_Bool)hasCameraRollAttachmentValue;
@property(readonly, copy, nonatomic) NSNumber *hasScreenCaptured; // @synthesize hasScreenCaptured=_hasScreenCaptured;
- (_Bool)hasScreenCapturedValue;
@property(readonly, copy, nonatomic) NSNumber *hasVideoAttached; // @synthesize hasVideoAttached=_hasVideoAttached;
- (_Bool)hasVideoAttachedValue;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsAutoTicket:(id)arg1 options:(id)arg2 sourceScreen:(id)arg3 sourceScreenFeatureTeam:(id)arg4 jiraMetaInfo:(id)arg5 tweaksInfo:(id)arg6 hasScreenCaptured:(id)arg7 hasVideoAttached:(id)arg8 hasCameraRollAttachment:(id)arg9 cameraRollAttachmentsFileNames:(id)arg10 isFromMushroom:(id)arg11 arroyoMode:(id)arg12 lastCrashId:(id)arg13;
- (id)initWithJSONDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isAutoTicket; // @synthesize isAutoTicket=_isAutoTicket;
- (_Bool)isAutoTicketValue;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isFromMushroom; // @synthesize isFromMushroom=_isFromMushroom;
- (_Bool)isFromMushroomValue;
@property(readonly, copy, nonatomic) NSString *jiraMetaInfo; // @synthesize jiraMetaInfo=_jiraMetaInfo;
@property(readonly, copy, nonatomic) NSString *lastCrashId; // @synthesize lastCrashId=_lastCrashId;
@property(readonly, copy, nonatomic) NSArray *options; // @synthesize options=_options;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *sourceScreen; // @synthesize sourceScreen=_sourceScreen;
@property(readonly, copy, nonatomic) NSString *sourceScreenFeatureTeam; // @synthesize sourceScreenFeatureTeam=_sourceScreenFeatureTeam;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *tweaksInfo; // @synthesize tweaksInfo=_tweaksInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

