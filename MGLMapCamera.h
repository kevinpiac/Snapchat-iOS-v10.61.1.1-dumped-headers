//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface MGLMapCamera : NSObject <NSSecureCoding, NSCopying>
{
    double _heading;
    double _pitch;
    double _altitude;
    struct CLLocationCoordinate2D _centerCoordinate;
}

+ (id)camera;
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D)arg1 fromDistance:(double)arg2 pitch:(double)arg3 heading:(double)arg4;
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D)arg1 fromEyeCoordinate:(struct CLLocationCoordinate2D)arg2 eyeAltitude:(double)arg3;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
@property(nonatomic) double heading; // @synthesize heading=_heading;
- (id)initWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 pitch:(double)arg3 heading:(double)arg4;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMapCamera:(id)arg1;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;

@end

