//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUReceivedSnap-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUMediaUrl, SOJUSnapMetadata;

@interface SOJUReceivedSnap : NSObject <SOJUReceivedSnap>
{
    NSString *_idValue;
    NSNumber *_st;
    NSNumber *_m;
    NSNumber *_ts;
    NSNumber *_sts;
    NSNumber *_zipped;
    NSNumber *_pts;
    NSNumber *_orientation;
    SOJUSnapMetadata *_snapMetadata;
    NSNumber *_sendStartTimestamp;
    NSArray *_replyMedias;
    NSNumber *_seqNum;
    NSNumber *_viewTimestamp;
    NSString *_sn;
    NSNumber *_t;
    NSNumber *_timer;
    NSString *_capTextDeprecated;
    NSNumber *_capPosDeprecated;
    NSNumber *_capOriDeprecated;
    NSNumber *_mo;
    NSNumber *_broadcast;
    NSString *_broadcastMediaUrl;
    NSString *_broadcastUrl;
    NSString *_broadcastActionText;
    NSString *_broadcastSecondaryText;
    NSNumber *_broadcastHideTimer;
    NSString *_filterId;
    NSString *_lensId;
    NSString *_egData;
    NSArray *_uvTags;
    NSString *_esId;
    NSNumber *_fiVersion;
    NSString *_fiSenderOutAlpha;
    NSString *_fiRecipientOutAlpha;
    NSNumber *_fiSendTimestamp;
    NSDictionary *_fideliusInfo;
    NSString *_fiSnapKey;
    NSString *_fiSnapIv;
    NSString *_venueId;
    NSArray *_snapAttachments;
    NSNumber *_isInfiniteDuration;
    NSString *_fiSenderOutBeta;
    NSNumber *_fiSnapReleaseTs;
    NSNumber *_fiRetried;
    SOJUMediaUrl *_directDownloadUrl;
    NSString *_contextHint;
    NSString *_animatedSnapType;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *animatedSnapType; // @synthesize animatedSnapType=_animatedSnapType;
- (long long)animatedSnapTypeEnum;
@property(readonly, copy, nonatomic) NSNumber *broadcast; // @synthesize broadcast=_broadcast;
@property(readonly, copy, nonatomic) NSString *broadcastActionText; // @synthesize broadcastActionText=_broadcastActionText;
@property(readonly, copy, nonatomic) NSNumber *broadcastHideTimer; // @synthesize broadcastHideTimer=_broadcastHideTimer;
- (_Bool)broadcastHideTimerValue;
@property(readonly, copy, nonatomic) NSString *broadcastMediaUrl; // @synthesize broadcastMediaUrl=_broadcastMediaUrl;
@property(readonly, copy, nonatomic) NSString *broadcastSecondaryText; // @synthesize broadcastSecondaryText=_broadcastSecondaryText;
@property(readonly, copy, nonatomic) NSString *broadcastUrl; // @synthesize broadcastUrl=_broadcastUrl;
- (int)broadcastValue;
@property(readonly, copy, nonatomic) NSNumber *capOriDeprecated; // @synthesize capOriDeprecated=_capOriDeprecated;
- (long long)capOriDeprecatedValue;
@property(readonly, copy, nonatomic) NSNumber *capPosDeprecated; // @synthesize capPosDeprecated=_capPosDeprecated;
- (double)capPosDeprecatedValue;
@property(readonly, copy, nonatomic) NSString *capTextDeprecated; // @synthesize capTextDeprecated=_capTextDeprecated;
@property(readonly, copy, nonatomic) NSString *contextHint; // @synthesize contextHint=_contextHint;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) SOJUMediaUrl *directDownloadUrl; // @synthesize directDownloadUrl=_directDownloadUrl;
@property(readonly, copy, nonatomic) NSString *egData; // @synthesize egData=_egData;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *esId; // @synthesize esId=_esId;
@property(readonly, copy, nonatomic) NSString *fiRecipientOutAlpha; // @synthesize fiRecipientOutAlpha=_fiRecipientOutAlpha;
@property(readonly, copy, nonatomic) NSNumber *fiRetried; // @synthesize fiRetried=_fiRetried;
- (_Bool)fiRetriedValue;
@property(readonly, copy, nonatomic) NSNumber *fiSendTimestamp; // @synthesize fiSendTimestamp=_fiSendTimestamp;
- (long long)fiSendTimestampValue;
@property(readonly, copy, nonatomic) NSString *fiSenderOutAlpha; // @synthesize fiSenderOutAlpha=_fiSenderOutAlpha;
@property(readonly, copy, nonatomic) NSString *fiSenderOutBeta; // @synthesize fiSenderOutBeta=_fiSenderOutBeta;
@property(readonly, copy, nonatomic) NSString *fiSnapIv; // @synthesize fiSnapIv=_fiSnapIv;
@property(readonly, copy, nonatomic) NSString *fiSnapKey; // @synthesize fiSnapKey=_fiSnapKey;
@property(readonly, copy, nonatomic) NSNumber *fiSnapReleaseTs; // @synthesize fiSnapReleaseTs=_fiSnapReleaseTs;
- (long long)fiSnapReleaseTsValue;
@property(readonly, copy, nonatomic) NSNumber *fiVersion; // @synthesize fiVersion=_fiVersion;
- (int)fiVersionValue;
@property(readonly, copy, nonatomic) NSDictionary *fideliusInfo; // @synthesize fideliusInfo=_fideliusInfo;
@property(readonly, copy, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdValue:(id)arg1 st:(id)arg2 m:(id)arg3 ts:(id)arg4 sts:(id)arg5 zipped:(id)arg6 pts:(id)arg7 orientation:(id)arg8 snapMetadata:(id)arg9 sendStartTimestamp:(id)arg10 replyMedias:(id)arg11 seqNum:(id)arg12 viewTimestamp:(id)arg13 sn:(id)arg14 t:(id)arg15 timer:(id)arg16 capTextDeprecated:(id)arg17 capPosDeprecated:(id)arg18 capOriDeprecated:(id)arg19 mo:(id)arg20 broadcast:(id)arg21 broadcastMediaUrl:(id)arg22 broadcastUrl:(id)arg23 broadcastActionText:(id)arg24 broadcastSecondaryText:(id)arg25 broadcastHideTimer:(id)arg26 filterId:(id)arg27 lensId:(id)arg28 egData:(id)arg29 uvTags:(id)arg30 esId:(id)arg31 fiVersion:(id)arg32 fiSenderOutAlpha:(id)arg33 fiRecipientOutAlpha:(id)arg34 fiSendTimestamp:(id)arg35 fideliusInfo:(id)arg36 fiSnapKey:(id)arg37 fiSnapIv:(id)arg38 venueId:(id)arg39 snapAttachments:(id)arg40 isInfiniteDuration:(id)arg41 fiSenderOutBeta:(id)arg42 fiSnapReleaseTs:(id)arg43 fiRetried:(id)arg44 directDownloadUrl:(id)arg45 contextHint:(id)arg46 animatedSnapType:(id)arg47;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isInfiniteDuration; // @synthesize isInfiniteDuration=_isInfiniteDuration;
- (_Bool)isInfiniteDurationValue;
@property(readonly, copy, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(readonly, copy, nonatomic) NSNumber *m; // @synthesize m=_m;
- (int)mValue;
@property(readonly, copy, nonatomic) NSNumber *mo; // @synthesize mo=_mo;
- (int)moValue;
@property(readonly, copy, nonatomic) NSNumber *orientation; // @synthesize orientation=_orientation;
- (long long)orientationEnum;
- (int)orientationValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *pts; // @synthesize pts=_pts;
- (long long)ptsValue;
@property(readonly, copy, nonatomic) NSArray *replyMedias; // @synthesize replyMedias=_replyMedias;
@property(readonly, copy, nonatomic) NSNumber *sendStartTimestamp; // @synthesize sendStartTimestamp=_sendStartTimestamp;
- (long long)sendStartTimestampValue;
@property(readonly, copy, nonatomic) NSNumber *seqNum; // @synthesize seqNum=_seqNum;
- (long long)seqNumValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *sn; // @synthesize sn=_sn;
@property(readonly, copy, nonatomic) NSArray *snapAttachments; // @synthesize snapAttachments=_snapAttachments;
@property(readonly, copy, nonatomic) SOJUSnapMetadata *snapMetadata; // @synthesize snapMetadata=_snapMetadata;
@property(readonly, copy, nonatomic) NSNumber *st; // @synthesize st=_st;
- (int)stValue;
@property(readonly, copy, nonatomic) NSNumber *sts; // @synthesize sts=_sts;
- (long long)stsValue;
@property(readonly, copy, nonatomic) NSNumber *t; // @synthesize t=_t;
- (int)tValue;
@property(readonly, copy, nonatomic) NSNumber *timer; // @synthesize timer=_timer;
- (double)timerValue;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *ts; // @synthesize ts=_ts;
- (long long)tsValue;
@property(readonly, copy, nonatomic) NSArray *uvTags; // @synthesize uvTags=_uvTags;
@property(readonly, copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
@property(readonly, copy, nonatomic) NSNumber *viewTimestamp; // @synthesize viewTimestamp=_viewTimestamp;
- (long long)viewTimestampValue;
@property(readonly, copy, nonatomic) NSNumber *zipped; // @synthesize zipped=_zipped;
- (_Bool)zippedValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

