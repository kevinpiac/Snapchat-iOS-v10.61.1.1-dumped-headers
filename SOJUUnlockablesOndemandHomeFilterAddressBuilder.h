//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandHomeFilterAddressBuilder : NSObject
{
    NSString *_address;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_lastModifiedTimestamp;
}

+ (id)withJUUnlockablesOndemandHomeFilterAddress:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAddress:(id)arg1;
- (id)setLastModifiedTimestamp:(id)arg1;
- (id)setLastModifiedTimestampValue:(long long)arg1;
- (id)setLatitude:(id)arg1;
- (id)setLatitudeValue:(double)arg1;
- (id)setLongitude:(id)arg1;
- (id)setLongitudeValue:(double)arg1;

@end
