//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface SCSpectaclesHardwareVersion : NSObject <NSCoding>
{
    long long _majorVersion;
    long long _minorVersion;
}

+ (id)_sharedVersionMatchingRegex;
+ (id)lagunaVersion;
+ (id)malibuVersion;
+ (id)manhattanVersion;
+ (id)neptuneVersion;
+ (id)newportVersion;
- (_Bool)_parseVersionString:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMajorVersion:(long long)arg1 minorVersion:(long long)arg2;
- (id)initWithString:(id)arg1;
- (_Bool)isEqualToVersion:(id)arg1;
- (_Bool)isLaguna;
- (_Bool)isMalibu;
- (_Bool)isNeptune;
- (_Bool)isNewport;
@property(nonatomic) long long majorVersion; // @synthesize majorVersion=_majorVersion;
@property(nonatomic) long long minorVersion; // @synthesize minorVersion=_minorVersion;

@end
