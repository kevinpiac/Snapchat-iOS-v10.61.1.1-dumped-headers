//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SOJUUserOwnedUnlockablesResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *lensListSignature;
@property(readonly, copy, nonatomic) NSArray *personalFilters;
@property(readonly, copy, nonatomic) NSArray *userOwnedUnlockables;
@property(readonly, copy, nonatomic) NSArray *userPinnedLenses;
@property(readonly, copy, nonatomic) NSArray *userUnlockedFilters;
@property(readonly, copy, nonatomic) NSArray *userUnlockedStickerPacks;
@end

