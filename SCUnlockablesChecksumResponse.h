//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSNumber;

@interface SCUnlockablesChecksumResponse : NSObject <NSCopying>
{
    NSNumber *_idValue;
    NSData *_checksum;
    NSNumber *_clientCacheTtlMinutes;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *checksum; // @synthesize checksum=_checksum;
@property(readonly, copy, nonatomic) NSNumber *clientCacheTtlMinutes; // @synthesize clientCacheTtlMinutes=_clientCacheTtlMinutes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSNumber *idValue; // @synthesize idValue=_idValue;
- (id)initWithIdValue:(id)arg1 checksum:(id)arg2 clientCacheTtlMinutes:(id)arg3;
- (_Bool)isEqual:(id)arg1;

@end

