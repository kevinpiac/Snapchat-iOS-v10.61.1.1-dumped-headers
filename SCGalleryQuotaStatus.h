//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryQuotaStatus-Protocol.h"

@class NSString;

@interface SCGalleryQuotaStatus : NSObject <SCGalleryQuotaStatus>
{
    int _lastWarningPercentage;
    int _numOfNoticesLeftForSuccessfulSave;
    int _numOfSuccessSavesAfterFullGallery;
    int _numOfWarningsForFullGallery;
    NSString *_objectID;
}

+ (id)allKeys;
+ (unsigned long long)countOfGalleryQuotaStatusesWithOptions:(id)arg1;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)fetchGalleryQuotaStatusForProfile:(id)arg1 options:(id)arg2;
+ (id)fetchGalleryQuotaStatusesWithOptions:(id)arg1;
+ (id)galleryQuotaStatusWithLastWarningPercentage:(int)arg1 numOfNoticesLeftForSuccessfulSave:(int)arg2 numOfSuccessSavesAfterFullGallery:(int)arg3 numOfWarningsForFullGallery:(int)arg4;
+ (id)observe:(id)arg1 queue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
+ (id)parseManagedObject:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 lastWarningPercentage:(int)arg2 numOfNoticesLeftForSuccessfulSave:(int)arg3 numOfSuccessSavesAfterFullGallery:(int)arg4 numOfWarningsForFullGallery:(int)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) int lastWarningPercentage; // @synthesize lastWarningPercentage=_lastWarningPercentage;
@property(readonly, nonatomic) int numOfNoticesLeftForSuccessfulSave; // @synthesize numOfNoticesLeftForSuccessfulSave=_numOfNoticesLeftForSuccessfulSave;
@property(readonly, nonatomic) int numOfSuccessSavesAfterFullGallery; // @synthesize numOfSuccessSavesAfterFullGallery=_numOfSuccessSavesAfterFullGallery;
@property(readonly, nonatomic) int numOfWarningsForFullGallery; // @synthesize numOfWarningsForFullGallery=_numOfWarningsForFullGallery;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

