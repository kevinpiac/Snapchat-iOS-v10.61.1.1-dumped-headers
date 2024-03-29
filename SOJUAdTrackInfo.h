//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdTrackInfo-Protocol.h"

@class NSData, NSString;

@interface SOJUAdTrackInfo : NSObject <SOJUAdTrackInfo>
{
    NSString *_sceid;
    NSString *_userData;
    NSString *_trackHostAndPath;
    NSString *_pixelToken;
    NSData *_userDataV2Deprecated;
    NSString *_userDataV2Encrypted;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithSceid:(id)arg1 userData:(id)arg2 trackHostAndPath:(id)arg3 pixelToken:(id)arg4 userDataV2Deprecated:(id)arg5 userDataV2Encrypted:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *pixelToken; // @synthesize pixelToken=_pixelToken;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *sceid; // @synthesize sceid=_sceid;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *trackHostAndPath; // @synthesize trackHostAndPath=_trackHostAndPath;
@property(readonly, copy, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(readonly, copy, nonatomic) NSData *userDataV2Deprecated; // @synthesize userDataV2Deprecated=_userDataV2Deprecated;
@property(readonly, copy, nonatomic) NSString *userDataV2Encrypted; // @synthesize userDataV2Encrypted=_userDataV2Encrypted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

