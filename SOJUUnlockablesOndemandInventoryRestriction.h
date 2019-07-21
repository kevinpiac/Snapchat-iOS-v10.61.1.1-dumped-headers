//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandInventoryRestriction-Protocol.h"

@class NSString, SOJUUnlockablesOndemandGeofence, SOJUUnlockablesOndemandRestriction, SOJUUnlockablesOndemandSchedule;

@interface SOJUUnlockablesOndemandInventoryRestriction : NSObject <SOJUUnlockablesOndemandInventoryRestriction>
{
    NSString *_idValue;
    SOJUUnlockablesOndemandSchedule *_schedule;
    SOJUUnlockablesOndemandGeofence *_geofence;
    SOJUUnlockablesOndemandRestriction *_restriction;
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
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandGeofence *geofence; // @synthesize geofence=_geofence;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdValue:(id)arg1 schedule:(id)arg2 geofence:(id)arg3 restriction:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandRestriction *restriction; // @synthesize restriction=_restriction;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandSchedule *schedule; // @synthesize schedule=_schedule;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

