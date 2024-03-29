//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdUnlockableAttachmentImpression-Protocol.h"

@class NSString, SOJUAdUnlockableDeepLink, SOJUAdUnlockableLongformAppInstall, SOJUAdUnlockableLongformVideoView, SOJUAdUnlockableLongformWebviewView;

@interface SOJUAdUnlockableAttachmentImpression : NSObject <SOJUAdUnlockableAttachmentImpression>
{
    SOJUAdUnlockableLongformVideoView *_longformVideoImpression;
    SOJUAdUnlockableLongformWebviewView *_remoteWebpageImpression;
    SOJUAdUnlockableLongformAppInstall *_appInstallImpression;
    SOJUAdUnlockableDeepLink *_deepLinkImpression;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJUAdUnlockableLongformAppInstall *appInstallImpression; // @synthesize appInstallImpression=_appInstallImpression;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy, nonatomic) SOJUAdUnlockableDeepLink *deepLinkImpression; // @synthesize deepLinkImpression=_deepLinkImpression;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithLongformVideoImpression:(id)arg1 remoteWebpageImpression:(id)arg2 appInstallImpression:(id)arg3 deepLinkImpression:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SOJUAdUnlockableLongformVideoView *longformVideoImpression; // @synthesize longformVideoImpression=_longformVideoImpression;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJUAdUnlockableLongformWebviewView *remoteWebpageImpression; // @synthesize remoteWebpageImpression=_remoteWebpageImpression;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

