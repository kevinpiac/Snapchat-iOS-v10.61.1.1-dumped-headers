//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCachingMediaStreamingEntity-Protocol.h"

@class NSString, SCUserSession;
@protocol SCGallerySnap, SCGallerySnapDetail;

@interface SCCachingMediaGalleryLagunaContent : NSObject <SCCachingMediaStreamingEntity>
{
    id <SCGallerySnap> _snap;
    id <SCGallerySnapDetail> _snapDetail;
    unsigned long long _imageFormat;
    NSString *_UUID;
    SCUserSession *_userSession;
    CDStruct_bac8f6e9 _mediaScenePath;
}

- (void).cxx_destruct;
- (id)UUID;
- (id)_composedMediaForSpectaclesImage:(id)arg1;
- (id)cachingMediaManager:(id)arg1 requiredSourceLevel:(long long)arg2 requestOptions:(id)arg3 atIndex:(long long)arg4 sourceImagesResultHandler:(CDUnknownBlockType)arg5;
- (long long)higherSourceLevelAvailable:(long long)arg1;
- (unsigned long long)imageFormat;
- (id)initWithSnap:(id)arg1 snapDetail:(id)arg2 imageFormat:(unsigned long long)arg3 userSession:(id)arg4 mediaScenePath:(CDStruct_bac8f6e9)arg5;
- (long long)maxImageCount;
- (long long)maxSourceLevel;
- (id)mediaEncryption;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

