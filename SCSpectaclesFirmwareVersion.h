//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface SCSpectaclesFirmwareVersion : NSObject <NSCoding>
{
    long long _majorVersion;
    long long _minorVersion;
    long long _patchVersion;
    NSString *_suffix;
}

+ (id)_sharedVersionMatchingRegex;
+ (_Bool)isVersionStringValid:(id)arg1;
+ (id)lagunaOTA1;
+ (id)lagunaOTA3;
+ (id)lagunaOTA4;
+ (id)lagunaRecovery;
+ (id)malibuOTA1;
+ (id)malibuOTA2;
+ (id)malibuOTA5;
- (void).cxx_destruct;
- (_Bool)_parseVersionString:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToVersion:(id)arg1;
- (_Bool)isVersionGreaterThan:(id)arg1;
@property(nonatomic) long long majorVersion; // @synthesize majorVersion=_majorVersion;
@property(nonatomic) long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property(nonatomic) long long patchVersion; // @synthesize patchVersion=_patchVersion;
@property(copy, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;

@end
