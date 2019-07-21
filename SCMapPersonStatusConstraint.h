//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate;

@interface SCMapPersonStatusConstraint : NSObject <NSCopying>
{
    double _radius;
    NSDate *_expirationDate;
    struct CLLocationCoordinate2D _center;
}

+ (id)constraintFromProtobuf:(id)arg1 creationTimestamp:(double)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLLocationCoordinate2D center; // @synthesize center=_center;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (_Bool)hasLocation;
- (unsigned long long)hash;
- (id)initWithCenter:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 expirationDate:(id)arg3;
- (_Bool)isCancelledAtCoordinate:(struct CLLocationCoordinate2D)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;

@end
