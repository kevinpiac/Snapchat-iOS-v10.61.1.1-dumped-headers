//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCCDCustomStickerOwner, SCObjectPlaceholder;

@interface SCCustomStickerOwnerChangeRequest : NSObject
{
    SCCDCustomStickerOwner *_customStickerOwner;
    SCObjectPlaceholder *_objectPlaceholder;
}

+ (id)changeRequestForCustomStickerOwner:(id)arg1;
+ (id)creationRequestWithCustomStickerOwner:(id)arg1;
+ (void)deleteAllCustomStickerOwners;
+ (void)deleteCustomStickerOwners:(id)arg1;
- (void).cxx_destruct;
- (void)addDeletion:(id)arg1;
- (void)addStickers:(id)arg1;
- (id)initWithCustomStickerOwner:(id)arg1;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(readonly, nonatomic) SCObjectPlaceholder *placeholderForCreatedCustomStickerOwner;
- (void)removeDeletion:(id)arg1;
- (void)removeStickers:(id)arg1;
@property(copy, nonatomic) NSString *userId;
- (void)setWithCustomStickerOwner:(id)arg1;

@end

