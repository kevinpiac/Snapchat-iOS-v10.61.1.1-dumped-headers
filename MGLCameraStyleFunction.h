//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGLStyleFunction.h"

@class NSDictionary;

@interface MGLCameraStyleFunction : MGLStyleFunction
{
}

+ (id)functionWithInterpolationMode:(unsigned long long)arg1 stops:(id)arg2 options:(id)arg3;
- (id)description;
- (unsigned long long)hash;
- (id)initWithInterpolationBase:(double)arg1 stops:(id)arg2;
- (id)initWithInterpolationMode:(unsigned long long)arg1 stops:(id)arg2 options:(id)arg3;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSDictionary *stops; // @dynamic stops;

@end

