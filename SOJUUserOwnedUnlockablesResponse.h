//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUserOwnedUnlockablesResponse-Protocol.h"

@class NSArray, NSString;

@interface SOJUUserOwnedUnlockablesResponse : NSObject <SOJUUserOwnedUnlockablesResponse>
{
    NSArray *_userOwnedUnlockables;
    NSArray *_personalFilters;
    NSArray *_userUnlockedFilters;
    NSString *_lensListSignature;
    NSArray *_userUnlockedStickerPacks;
    NSArray *_userPinnedLenses;
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
- (id)initWithUserOwnedUnlockables:(id)arg1 personalFilters:(id)arg2 userUnlockedFilters:(id)arg3 lensListSignature:(id)arg4 userUnlockedStickerPacks:(id)arg5 userPinnedLenses:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *lensListSignature; // @synthesize lensListSignature=_lensListSignature;
@property(readonly, copy, nonatomic) NSArray *personalFilters; // @synthesize personalFilters=_personalFilters;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSArray *userOwnedUnlockables; // @synthesize userOwnedUnlockables=_userOwnedUnlockables;
@property(readonly, copy, nonatomic) NSArray *userPinnedLenses; // @synthesize userPinnedLenses=_userPinnedLenses;
@property(readonly, copy, nonatomic) NSArray *userUnlockedFilters; // @synthesize userUnlockedFilters=_userUnlockedFilters;
@property(readonly, copy, nonatomic) NSArray *userUnlockedStickerPacks; // @synthesize userUnlockedStickerPacks=_userUnlockedStickerPacks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

