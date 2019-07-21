//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;
@protocol SCLensPersistentStoreCleanupPolicy;

@protocol SCLensPreferences <NSObject>
- (void)clearLensPersistentStoreWithPolicy:(id <SCLensPersistentStoreCleanupPolicy>)arg1 completion:(void (^)(void))arg2;
- (long long)contentArchiveSizeForLensId:(NSString *)arg1;
@property(copy, nonatomic) NSDictionary *lensSubPickerActiveOptionIds;
- (NSData *)loadLensPersistentStoreWithEffectId:(NSString *)arg1;
- (void)saveLensPersistentStoreWithEffectId:(NSString *)arg1 serializedStoreData:(NSData *)arg2;
- (void)setContentArchiveSize:(long long)arg1 forLensId:(NSString *)arg2;
@property(retain, nonatomic) NSDictionary *usedLensIds;
@end

