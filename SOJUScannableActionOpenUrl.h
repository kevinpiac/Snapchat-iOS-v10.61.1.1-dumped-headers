//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUScannableActionOpenUrl-Protocol.h"

@class NSString;

@interface SOJUScannableActionOpenUrl : NSObject <SOJUScannableActionOpenUrl>
{
    NSString *_header;
    NSString *_byline;
    NSString *_url;
    NSString *_iconUrl;
    NSString *_localIconAssetName;
    NSString *_actionHint;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *actionHint; // @synthesize actionHint=_actionHint;
@property(readonly, copy, nonatomic) NSString *byline; // @synthesize byline=_byline;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(readonly, copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeader:(id)arg1 byline:(id)arg2 url:(id)arg3 iconUrl:(id)arg4 localIconAssetName:(id)arg5 actionHint:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *localIconAssetName; // @synthesize localIconAssetName=_localIconAssetName;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

