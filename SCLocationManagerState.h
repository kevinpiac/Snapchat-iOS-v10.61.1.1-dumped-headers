//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLocationManagerState-Protocol.h"

@class NSSet, NSString;

@interface SCLocationManagerState : NSObject <SCLocationManagerState>
{
    _Bool _updatingLocation;
    _Bool _allowsBackground;
    _Bool _updatingHeading;
    double _locationAccuracy;
    NSSet *_observingBeaconRegions;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allowsBackground; // @synthesize allowsBackground=_allowsBackground;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdatingLocation:(_Bool)arg1 locationAccuracy:(double)arg2 allowsBackground:(_Bool)arg3 updatingHeading:(_Bool)arg4 observingBeaconRegions:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double locationAccuracy; // @synthesize locationAccuracy=_locationAccuracy;
@property(readonly, copy, nonatomic) NSSet *observingBeaconRegions; // @synthesize observingBeaconRegions=_observingBeaconRegions;
- (_Bool)preferFasterCoding;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool updatingHeading; // @synthesize updatingHeading=_updatingHeading;
@property(readonly, nonatomic) _Bool updatingLocation; // @synthesize updatingLocation=_updatingLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

