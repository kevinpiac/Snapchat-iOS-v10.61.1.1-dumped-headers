//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesAppInstallAttachment-Protocol.h"

@class NSString;

@interface SOJUUnlockablesAppInstallAttachment : NSObject <SOJUUnlockablesAppInstallAttachment>
{
    NSString *_appName;
    NSString *_iosAppId;
    NSString *_androidAppUrl;
    NSString *_appIconUrl;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *androidAppUrl; // @synthesize androidAppUrl=_androidAppUrl;
@property(readonly, copy, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl=_appIconUrl;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAppName:(id)arg1 iosAppId:(id)arg2 androidAppUrl:(id)arg3 appIconUrl:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
@property(readonly, copy, nonatomic) NSString *iosAppId; // @synthesize iosAppId=_iosAppId;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

