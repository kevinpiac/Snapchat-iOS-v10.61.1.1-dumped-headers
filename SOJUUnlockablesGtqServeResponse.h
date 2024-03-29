//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesGtqServeResponse-Protocol.h"

@class NSString, SOJUUnlockablesGtqUnlockablesResponse, SOJUUnlockablesGtqVenuesResponse;

@interface SOJUUnlockablesGtqServeResponse : NSObject <SOJUUnlockablesGtqServeResponse>
{
    SOJUUnlockablesGtqUnlockablesResponse *_unlockables;
    SOJUUnlockablesGtqVenuesResponse *_venues;
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
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithUnlockables:(id)arg1 venues:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) SOJUUnlockablesGtqUnlockablesResponse *unlockables; // @synthesize unlockables=_unlockables;
@property(readonly, copy, nonatomic) SOJUUnlockablesGtqVenuesResponse *venues; // @synthesize venues=_venues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

